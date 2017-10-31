//
//  ARController.m
//  Furniture
//
//  Created by 杨肖宇 on 2017/4/5.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "ARController.h"
#import "SDKTools.h"
#import "AlvaTool.h"
#import "DHGuidePageHUD.h"

#import <QuartzCore/QuartzCore.h>

#import "CTToastView.h"

#import "ARInteractor.h"

#define GUIDEKEY  @"GUIDEKEY"

static const char* allmodelsID;

@interface ARController ()

@property (nonatomic, strong) UIView * footerView;

@property (nonatomic, strong) UIButton * helpBtn;

@property (nonatomic, strong) UIScrollView * scrollView;

@property (nonatomic, strong) NSArray * dataArr;

@property (nonatomic, strong) ARInteractor * interactor;

@property (nonatomic, assign) BOOL showHelp;

@end

@implementation ARController

- (instancetype)init{
    if (self = [super init]) {
        _interactor = [ARInteractor new];
        _interactor.controller = self;
    }
    return self;
}

- (void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    NSLog(@"%@==***dealloc", [self class]);
}

- (BOOL)prefersStatusBarHidden{
    return YES;
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];

    [AlvaTool sharedInstance].isStatusBarHidden = YES;
    self.navigationController.navigationBarHidden = YES;

    
    [[NSNotificationCenter defaultCenter] postNotificationName:InterfaceOrientation object:@"YES"];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:StatusBarHidden object:@"YES"];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(changeUnityViewFrame) name:UIApplicationWillChangeStatusBarOrientationNotification object:nil];
    
    [AlvaTool sharedInstance].isRotate = YES;
    // 强制转为横屏
    [self setUIInterfaceOrientationLandscapeRight];
    
    [self setStaticGuidePage];
}

- (void)changeUnityViewFrame{
    [[[AlvaTool sharedInstance] getUnityView] setFrame:CGRectMake(0, 0, kScreenHeight, kScreenWidth)];
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [AlvaTool sharedInstance].isRotate = NO;
    [self.interactor loadGoodsList];

    [[NSNotificationCenter defaultCenter] postNotificationName:InterfaceOrientation object:@"NO"];
}

- (void)viewWillDisappear:(BOOL)animated{
    //清除模型
    UnitySendMessage("GameObjectController", "clearAll", "");
    self.navigationController.navigationBarHidden = NO;
    
    [super viewWillDisappear:animated];
}

- (void)viewDidLoad {
    [super viewDidLoad];

    [self setupUI];
}

- (void)setupUI{
    
    [[AlvaTool sharedInstance] unityPause:NO];
    
    [AlvaTool sharedInstance].imageArr = @[@"help1",
                                           @"help2",
                                           @"help3",
                                           @"help4"];;
    [self.view addSubview:[[AlvaTool sharedInstance] getUnityView]];
    
    [self initTableView];
    
    [self addHelpBtn];
}

- (void)setStaticGuidePage {
    
    NSInteger count = [[[NSUserDefaults standardUserDefaults] objectForKey:GUIDEKEY] integerValue];
    if (!count) {
        [[NSUserDefaults standardUserDefaults] setObject:@1 forKey:GUIDEKEY];
        count= 1;
    }
    if (count <= 3) {
        
        count++;
        [[NSUserDefaults standardUserDefaults] setObject:[NSNumber numberWithInteger:count] forKey:GUIDEKEY];
        NSArray *imageNameArray = @[@"help1",@"help2",@"help3", @"help4"];
        DHGuidePageHUD *guidePage = [[DHGuidePageHUD alloc] dh_initWithFrame:[UIScreen mainScreen].bounds imageNameArray:imageNameArray buttonIsHidden:YES];
        guidePage.slideInto = YES;
        guidePage.skipBtnRect = CGRectMake(kScreenWidth - 80, 10, 50, 30);
        [[UIApplication sharedApplication].keyWindow addSubview:guidePage];
        
    }
}

- (void)initTableView{
    
    _tableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, 150, kScreenWidth - 50) style:UITableViewStyleGrouped];
    _tableView.delegate = self.interactor;
    _tableView.dataSource = self.interactor;
    [_tableView setSeparatorColor:[UIColor clearColor]];
    [_tableView setBackgroundColor:colorFromHexStringWithAlpha(@"000000", .5)];
    [self.view addSubview:_tableView];
    
    [_tableView registerNib:[UINib nibWithNibName:@"ARTableViewCell" bundle:nil] forCellReuseIdentifier:@"ARTableViewCell"];
    
    [self.view addSubview:self.footerView];
}

- (UIView *)footerView{
    
    if (!_footerView) {
        _footerView = [[UIView alloc] initWithFrame:CGRectMake(0, kScreenWidth - 35, 140, 30)];
        UIButton * backBtn = [[UIButton alloc] initWithFrame:CGRectMake(10, 0, 60, 30)];
        [backBtn setTitle:@"返回" forState:UIControlStateNormal];
        [backBtn setTitleColor:colorFromHexString(@"999999") forState:UIControlStateNormal];
        backBtn.titleLabel.textAlignment = NSTextAlignmentCenter;
        [backBtn addTarget:self.interactor action:@selector(backBtnClicked:) forControlEvents:UIControlEventTouchUpInside];
        [backBtn setBackgroundColor:colorFromHexStringWithAlpha(@"000000", .5)];
        backBtn.clipsToBounds = YES;
        backBtn.layer.cornerRadius = 15;
        [_footerView addSubview:backBtn];
        
        UIButton * confirmBtn = [[UIButton alloc] initWithFrame:CGRectMake(80, 0, 60, 30)];
        [confirmBtn setTitle:@"隐藏" forState:UIControlStateNormal];
        [confirmBtn setTitleColor:colorFromHexString(@"999999") forState:UIControlStateNormal];
        confirmBtn.titleLabel.textAlignment = NSTextAlignmentCenter;
        [confirmBtn addTarget:self.interactor action:@selector(confirmBtnClicked:) forControlEvents:UIControlEventTouchUpInside];
        confirmBtn.clipsToBounds = YES;
        confirmBtn.layer.cornerRadius = 15;
        [confirmBtn setBackgroundColor:colorFromHexStringWithAlpha(@"000000", .5)];
        [_footerView addSubview:confirmBtn];
    }
    return _footerView;
}

- (void)addHelpBtn
{
    _showHelp = NO;
    
    self.helpBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    self.helpBtn.frame = CGRectMake(kScreenHeight - 50, 0, 60, 60);
    [self.helpBtn setImage:[UIImage imageNamed:@"ui12-47-32.png"] forState:UIControlStateNormal];
    [self.helpBtn addTarget:self action:@selector(helpClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self.helpBtn];
}

- (void)helpClick{
    
    [self.view addSubview:self.scrollView];
    [self.view insertSubview:self.helpBtn aboveSubview:self.scrollView];
    _showHelp = !_showHelp;
    
    if (_showHelp) {
        
        [self.helpBtn setImage:readImageFromImageName(@"cha") forState:UIControlStateNormal];
        
    }else{
        
        [self.helpBtn setImage:[UIImage imageNamed:@"ui12-47-32.png"] forState:UIControlStateNormal];
        [self.scrollView removeFromSuperview];
    }
}

-(UIScrollView *)scrollView
{
    if (!_scrollView) {
        
        NSArray * arr = [AlvaTool sharedInstance].imageArr;

        _scrollView = [[UIScrollView alloc] initWithFrame:self.view.bounds];
        _scrollView.bounces = NO;
        _scrollView.backgroundColor = [UIColor redColor];
        _scrollView.showsHorizontalScrollIndicator = NO;
        _scrollView.contentSize= CGSizeMake(kScreenWidth * arr.count, kScreenHeight);
        _scrollView.contentOffset = CGPointMake(0, 0);
        _scrollView.pagingEnabled = YES;

        for (int i = 0; i < arr.count; i ++) {
            UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(kScreenWidth * i, 0, kScreenWidth, kScreenHeight)];
            NSString *imageStr = arr[i];
            imageView.image =   [UIImage imageNamed:imageStr];
            [_scrollView addSubview:imageView];
        }
    }
    return _scrollView;
}

extern "C" char* _ModelsID ( const char* string)
{
    if (string != NULL) {
        
        NSString *modelsName = [NSString stringWithUTF8String:string];
        
        allmodelsID = string;
        
        NSLog(@"###%@", modelsName);
    }
    return NULL;
}


@end
