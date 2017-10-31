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
#import "AFNetworkReachabilityManager.h"

@implementation ARInteractor{
    NSArray * _dataArr;
    NSMutableArray * _downLoadTaskArr;
    NSMutableArray * _downLoadingUrlArr;
}

- (instancetype)init{
    if (self = [super init]) {
       [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(reloadTableView:) name:GetARListDataSuccess object:nil];
    }
    return self;
}

- (void)dealloc{
    NSLog(@"dealloc==%@", [self class]);
    [_downLoadTaskArr enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSURLSessionDownloadTask * task = (NSURLSessionDownloadTask *)obj;
        [task cancel];
        NSLog(@"task取消");
    }];
}

- (void)loadGoodsList{
   
//    [DownloadFileManager clearAllCaches];
    _dataArr = [NSArray new];
    _downLoadTaskArr = [NSMutableArray new];
    _downLoadingUrlArr = [NSMutableArray new];
    
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
-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return [_dataArr count];
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 1;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NSString * imageURL = _dataArr[indexPath.section][@"commodityPic"];

    NSString * resue = [NSString stringWithFormat:@"ARTableViewCell%d", (int)indexPath.section];
    [tableView registerNib:[UINib nibWithNibName:@"ARTableViewCell" bundle:nil] forCellReuseIdentifier:resue];
    ARTableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:resue forIndexPath:indexPath];

    if (!cell) {
        
        cell = [[[NSBundle mainBundle] loadNibNamed:@"ARTableViewCell" owner:nil options:nil] firstObject];
    }
    
    //progress的初始化避免由于cell的复用导致progress显示错误
    NSString * md5 = [_dataArr[indexPath.section][@"arUrl"] stringFromMD5];
    NSString * destinationPath = [AR_CACHES_PATH stringByAppendingPathComponent:[NSString stringWithFormat:@"AR%@", md5]];
    if ([DownloadFileManager sizeCachesWithPath:destinationPath] > 0) {
        [cell.progressView setProgress:1.0];
    }else{
        [cell.progressView setProgress:0];
    }
    
    [cell.picImageView sd_setImageWithURL:URLWITHSTRING(imageURL) placeholderImage:nil];
    cell.backgroundColor = [UIColor clearColor];

    return cell;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, 44)];
    [label setBackgroundColor:[UIColor clearColor]];
    [label setText:[NSString stringWithFormat:@"%@", _dataArr[section][@"commodityName"]]];
    [label setTextColor:colorFromHexString(@"ffffff")];

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
    
    //正在下载或者URL为nil
    if ([_downLoadingUrlArr containsObject:md5] || STRING_ISNIL(_dataArr[indexPath.section][@"arUrl"])) {
        return;
    }
    
    ARTableViewCell * cell = [tableView cellForRowAtIndexPath:indexPath];

    //判断是否缓存
    if ([DownloadFileManager sizeCachesWithPath:destinationPath] > 0) {
        
        [cell.progressView setProgress:1 animated:YES];
        [self handelFile:destinationPath indexPath:indexPath];
        
        return;
    }

    [_downLoadingUrlArr addObject:md5];
    
    __weak ARInteractor * weakSelf = self;
    //arUrl
    __block NSURLSessionDownloadTask * task = [[DownloadFileManager new] downloadFileWithUrl:_dataArr[indexPath.section][@"arUrl"] progress:^(double progress) {
        
        dispatch_async(dispatch_get_main_queue(), ^{
            [cell.progressView setProgress:progress animated:YES];
        });
        
    } success:^(NSString *filePath) {
        
        [weakSelf handelFile:filePath indexPath:indexPath];
        [_downLoadTaskArr removeObject:task];
        [_downLoadingUrlArr removeObject:md5];
        
    } failure:^(NSError *error) {
        [_downLoadTaskArr removeObject:task];
        [_downLoadingUrlArr removeObject:md5];
    }];

    BOOL isContain = [_downLoadTaskArr containsObject:task];
    if (!isContain) {
        [_downLoadTaskArr addObject:task];
    }
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

#pragma mark--NSNotification
- (void)reloadTableView:(NSNotification *)notifi{
    _dataArr = (NSArray *)notifi.object;
    [self.controller.tableView reloadData];
}

@end
