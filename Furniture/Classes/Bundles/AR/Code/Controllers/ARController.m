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

#import <QuartzCore/QuartzCore.h>

#import "CTToastView.h"

#import "ARInteractor.h"

@interface ARController ()

@property (nonatomic, strong) UIView * footerView;

@property (nonatomic, strong) NSArray * dataArr;

@property (nonatomic, strong) ARInteractor * interactor;

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
}

- (BOOL)prefersStatusBarHidden{
    return YES;
}

- (void)viewWillAppear:(BOOL)animated{
    
    [super viewWillAppear:animated];

    [UIApplication sharedApplication].statusBarHidden = YES;
    self.navigationController.navigationBarHidden = YES;
    
    [[NSNotificationCenter defaultCenter] postNotificationName:InterfaceOrientation object:@"YES"];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:StatusBarHidden object:@"YES"];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(changeUnityViewFrame) name:UIApplicationWillChangeStatusBarOrientationNotification object:nil];
    
    // 强制转为横屏
    [self setUIInterfaceOrientationLandscapeRight];
}

- (void)changeUnityViewFrame{
    [[[AlvaTool sharedInstance] getUnityView] setFrame:CGRectMake(0, 0, kScreenHeight, kScreenWidth)];
}

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [[NSNotificationCenter defaultCenter] postNotificationName:InterfaceOrientation object:@"NO"];
}

- (void)viewWillDisappear:(BOOL)animated{
    //清除模型
    UnitySendMessage("GameObjectController", "clearAll", "");
    //    [[NSNotificationCenter defaultCenter] postNotificationName:InterfaceOrientation object:@"YES"];
    self.navigationController.navigationBarHidden = NO;
    
    [UIApplication sharedApplication].statusBarHidden = NO;
    [super viewWillDisappear:animated];
}

- (void)viewDidLoad {
    [super viewDidLoad];

    [self setupUI];
}

- (void)setupUI{
    
    [[AlvaTool sharedInstance] unityPause:NO];
    
    [self.view addSubview:[[AlvaTool sharedInstance] getUnityView]];
    
    [self initTableView];
    
    [self.interactor loadGoodsList];
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

@end
