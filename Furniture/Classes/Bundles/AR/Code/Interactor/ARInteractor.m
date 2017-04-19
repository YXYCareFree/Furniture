//
//  ARInteractor.m
//  Furniture
//
//  Created by 杨肖宇 on 2017/4/6.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "ARInteractor.h"
#import "ARController.h"
#import "ARAdapter.h"
#import "ARTableViewCell.h"
#import "SSZipArchive.h"
#import "DownloadFileManager.h"
#import "NSString+MD5Addition.h"
#import "UIImageView+WebCache.h"
#import "NetworkManager.h"
#import "CTToastView.h"
#import "SDKTools.h"

@implementation ARInteractor{
    NSArray * _dataArr;
}

- (instancetype)init{
    if (self = [super init]) {
       [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(reloadTableView:) name:GetARListDataSuccess object:nil];     
    }
    return self;
}

- (void)loadGoodsList{
    
    if ([[NetworkManager getCurrentNetwork] isEqualToString:@"notReachable"]) {
        CTToastView * toastView =  [CTToastView presentModelToastWithin:self.controller.view text:@"当前无网络,请检查网络" autoHidden:YES];
        toastView.center = CGPointMake(kScreenHeight / 2, kScreenWidth / 2);
        return;
    }
    _dataArr = [NSArray new];
    [[ARAdapter new] getARList];
}

- (void)backBtnClicked:(UIButton *)btn{
    [self.controller.navigationController popViewControllerAnimated:YES];
}

- (void)confirmBtnClicked:(UIButton *)btn{
   
    if ([btn.titleLabel.text isEqualToString:@"隐藏"]) {
        self.controller.tableView.hidden = YES;
        [btn setTitle:@"展示" forState:UIControlStateNormal];
    }else{
        self.controller.tableView.hidden = NO;
        [btn setTitle:@"隐藏" forState:UIControlStateNormal];
    }
}

#pragma mark--UITableViewDataSource
#pragma mark - TableViewDataSource
-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return [_dataArr count];
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 1;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    ARTableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:@"ARTableViewCell"];
    if (!cell) {
        cell = [[[NSBundle mainBundle] loadNibNamed:@"ARTableViewCell" owner:nil options:nil] firstObject];
    }
    NSString * imageURL = _dataArr[indexPath.section][@"commodityPic"];
    [cell.picImageView sd_setImageWithURL:URLWITHSTRING(imageURL) placeholderImage:nil];
    cell.backgroundColor = [UIColor clearColor];
    
    return cell;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, 44)];
    [label setBackgroundColor:[UIColor clearColor]];
    [label setText:[NSString stringWithFormat:@"%@", _dataArr[section][@"commodityName"]]];
    [label setTextColor:colorFromHexString(@"ffffff")];
    //    label.backgroundColor = [UIColor whiteColor];
    return label;
    
}
#pragma mark - TableViewDelegate
-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    
    return 44;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 80;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    NSString * md5 = [_dataArr[indexPath.section][@"arUrl"] stringFromMD5];
    NSString * destinationPath = [AR_CACHES_PATH stringByAppendingPathComponent:[NSString stringWithFormat:@"AR%@", md5]];
    
    ARTableViewCell * cell = [tableView cellForRowAtIndexPath:indexPath];

    //判断是否缓存
    if ([self existedFile:destinationPath]) {
        
        [cell.progressView setProgress:1 animated:YES];
        [self handelFile:destinationPath indexPath:indexPath];
        
        return;
    }
    __weak ARInteractor * weakSelf = self;
    //arUrl
    [[DownloadFileManager new] downloadFileWithUrl:_dataArr[indexPath.section][@"arUrl"] progress:^(double progress) {
        
        dispatch_async(dispatch_get_main_queue(), ^{
            [cell.progressView setProgress:progress animated:YES];

        });
        NSLog(@"cell progress==%f", progress);
        
    } success:^(NSString *filePath) {
        
        [weakSelf handelFile:filePath indexPath:indexPath];
        
    } failure:^(NSError *error) {
        
    }];
}

- (void)handelFile:(NSString *)filePath indexPath:(NSIndexPath *)indexPath{
    
    NSFileManager * fileManager = [NSFileManager defaultManager];
    
    for(NSString *str in [fileManager contentsOfDirectoryAtPath:filePath error:nil]){
        
        for (NSString * path in [fileManager contentsOfDirectoryAtPath:[filePath stringByAppendingPathComponent:str] error:nil]) {
            
            if (![path hasSuffix:@"manifest"] && ![path hasSuffix:@"meta"]) {
                
                [[SDKTools sharedInstance] changeModelPathString:[[filePath stringByAppendingPathComponent:str] stringByAppendingPathComponent:path] group:(int)indexPath.section];
                NSLog(@"\n\n#######加载模型");
            }
        }
        
    }
}

- (BOOL)existedFile:(NSString *)filePath{
    
    NSFileManager * fileManager = [NSFileManager defaultManager];
    
    BOOL existed = [fileManager fileExistsAtPath:filePath];
    
    if (!existed) {
        [fileManager createDirectoryAtPath:filePath withIntermediateDirectories:YES attributes:nil error:nil];
    }
    return existed;
}

#pragma mark--NSNotification
- (void)reloadTableView:(NSNotification *)notifi{
    _dataArr = (NSArray *)notifi.object;
    [self.controller.tableView reloadData];
}

@end
