//
//  HomeViewInteractor.m
//  Furniture
//
//  Created by beyondSoft on 17/1/3.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "HomeViewInteractor.h"

#import "ScanViewController.h"
#import "HomeViewController.h"
#import "SearchViewController.h"
#import "ARController.h"

#import "HomeViewAdapter.h"
#import "CTToastView.h"
#import "HomeBannerView.h"

#import "FunctionTableViewCell.h"
#import "RecommendTableViewCell.h"
#import "ActivityTableViewCell.h"

#import "HomeRecoomendGoodsModel.h"
#import "HomeCategoryModel.h"
#import "HomeBannerModel.h"

#import "MJRefresh.h"

#import "SDCycleScrollView.h"

#import "LoginViewController.h"
#import "SearchDetailViewController.h"
#import "SDPhotoBrowser.h"
#import "SDCollectionViewCell.h"

static NSString * const FountionCell = @"FounctionCell";
static NSString * const RecommendCell = @"RecommendTableViewCell";
static NSString * const ActivityCell = @"ActivityTableViewCell";

@interface HomeViewInteractor ()<UIScrollViewDelegate, SDCycleScrollViewDelegate, SDPhotoBrowserDelegate>

@property (nonatomic, assign) CGFloat categoryRowHeight;

@property (nonatomic, strong) CTToastView * progressView;

@property (nonatomic, strong) NSArray * categoryArr;

@property (nonatomic, strong) NSArray * recommendArr;

@property (nonatomic, strong) NSArray * bannerArr;

@property (nonatomic, strong) UIImage * currentImage;
@end

@implementation HomeViewInteractor

- (instancetype)init{
    
    if (self = [super init]) {
        
        [self.controller.tableView registerNib:[UINib nibWithNibName:@"ActivityTableViewCell" bundle:nil] forCellReuseIdentifier:ActivityCell];
        
        [self.controller.tableView registerNib:[UINib nibWithNibName:@"RecommendTableViewCell" bundle:nil] forCellReuseIdentifier:RecommendCell];
        
        [self.controller.tableView registerClass:[FunctionTableViewCell class] forCellReuseIdentifier:FountionCell];
        
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(updateHomeBannerView:)
                                                 name:GetHomeBannerDataSuccess
                                                   object:nil];
        
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                    selector:@selector(updateHomeCategory:) name:GetHomeCategoryDataSuccess
                                                   object:nil];
        
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(updateHomeRecommend:)
                                                     name:GetHomeRecommendDataSuccess
                                                   object:nil];
    }
    return self;
}

- (void)dealloc{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)refreshHome{
    
    NSString * net = [NetworkManager getCurrentNetwork];
    if ([net isEqualToString:@"notReachable"]) {
        
        [self.controller.tableView.mj_header endRefreshing];
        
        [CTToastView presentModelToastWithin:GETCURRENTCONTROLLER.view text:@"当前无网络,请检查网络" autoHidden:YES];
        return;
    }
    
    HomeViewAdapter * adapter = [HomeViewAdapter new];
    [adapter requestHomeData];
}

- (void)loadHome{
    
    __weak HomeViewInteractor * weakSelf = self;
    self.controller.tableView.mj_header = [MJRefreshNormalHeader headerWithRefreshingBlock:^{
        [weakSelf refreshHome];
    }];
    
    [self refreshHome];
    
//    self.progressView = [CTToastView presentModelProgressWithin:self.controller.view text:@"正在加载..."];
//    self.progressView.center = self.controller.tableView.center;

}

#pragma mark--NSNotification
- (void)updateHomeBannerView:(NSNotification *)notifi{
    
    [self.controller.tableView.mj_header endRefreshing];
//    [self.progressView dismissToast];

    NSArray * arr = (NSArray *)notifi.object;
    
    if (self.bannerArr == nil) {
        self.bannerArr = [NSArray new];
    }
    self.bannerArr = arr;
    
    [self.controller.headerBannerView refreshBanner:arr];
}

- (void)updateHomeCategory:(NSNotification *)notifi{
    
    if (!self.categoryArr) {
        self.categoryArr = [NSArray new];
    }
    self.categoryArr = (NSArray *)notifi.object;
    
    NSIndexSet * section = [[NSIndexSet alloc] initWithIndex:0];
    [self.controller.tableView reloadSections:section withRowAnimation:UITableViewRowAnimationAutomatic];
}

- (void)updateHomeRecommend:(NSNotification *)notifi{
    
    if (!self.recommendArr) {
        self.recommendArr = [NSArray new];
    }
    self.recommendArr = (NSArray *)notifi.object;
    NSIndexSet * section = [[NSIndexSet alloc] initWithIndex:2];
    [self.controller.tableView reloadSections:section withRowAnimation:UITableViewRowAnimationAutomatic];
}
#pragma mark--用户点击事件
- (void)scanClicked:(id)sender{
    PUSHCONTROLLER_WITHCLASSNAME(@"ScanViewController");
//    ScanViewController * scanVC = [ScanViewController new];
//    [self.controller.navigationController customNoBackTitlePushViewController:scanVC animated:YES];
}

- (void)ARClicked:(id)sender{
    
    PUSHCONTROLLER_WITHCLASSNAME(@"ARController");
    
//    [self.controller.navigationController presentViewController:[LoginViewController new] animated:YES completion:nil];
    
//    SearchDetailViewController * vc = [SearchDetailViewController new];
//    vc.hidesBottomBarWhenPushed = YES;
//    [self.controller.navigationController pushViewController:vc animated:YES];
}

- (void)categoryClicked:(UITapGestureRecognizer *)tap{
    
    NSInteger tag = tap.view.tag;
    HomeCategoryModel * model = self.categoryArr[tag - 100];
    [YXYWebViewManager openURL:model.catalogCode withType:@"category"];
    NSLog(@"点击了分类按钮%ld", tag);
}

- (void)activityImageViewClicked:(UITapGestureRecognizer *)tap{
    NSLog(@"用户点击了%ld", tap.view.tag);
}

- (void)recommendImageViewClicked:(UITapGestureRecognizer *)tap{
    
    HomeRecoomendGoodsModel * model = self.recommendArr[tap.view.tag - 300];

    [YXYWebViewManager openURL:model.commodityCode withType:@"detail"];
    NSLog(@"用户点击了%ld", tap.view.tag);
}

- (void)searchClicked:(id)sender{
    NSLog(@"用户点击了搜索");

    PUSHCONTROLLER_WITHCLASSNAME(@"SearchViewController");
}
#pragma mark--SDCycleScrollViewDelegate
/** 点击轮播图片回调 */
- (void)cycleScrollView:(SDCycleScrollView *)cycleScrollView didSelectItemAtIndex:(NSInteger)index{
    
//    cycleScrollView.autoScroll = NO;
//    
//    SDPhotoBrowser * photoBrowser = [SDPhotoBrowser new];
//    photoBrowser.currentImageIndex = index;
//    photoBrowser.imageCount = self.bannerArr.count;
//    
//    UICollectionView * collectionView;
//    for (UIView * view in cycleScrollView.subviews) {
//        if ([view isKindOfClass:[UICollectionView class]]) {
//            collectionView = (UICollectionView *)view;
//        }
//    }
//    photoBrowser.sourceImagesContainerView = collectionView;
//    photoBrowser.delegate = self;
//    
//    [photoBrowser show];
//
    HomeBannerModel * model = self.bannerArr[index];
    
    [YXYWebViewManager openURL:model.imgHrefLocation];
    NSLog(@"点击了第%ld张", index);
}

//- (void)getCurrentImage:(UIImage *)image{
//    _currentImage = image;
//}

#pragma mark--SDPhotoBrowserDelegate
- (UIImage *)photoBrowser:(SDPhotoBrowser *)browser placeholderImageForIndex:(NSInteger)index{
    return _currentImage;
//    UICollectionView * collectionView;
//    for (UIView * view in self.controller.headerBannerView.subviews) {
//        if ([view isKindOfClass:[SDCycleScrollView class]]) {
//            
//            for (UIView * subView in view.subviews) {
//              
//                if ([subView isKindOfClass:[UICollectionView class]]) {
//                   
//                    collectionView = (UICollectionView *)subView;
//                    
//                    SDCollectionViewCell * cell = (SDCollectionViewCell *)[collectionView cellForItemAtIndexPath:[NSIndexPath indexPathForItem:index inSection:0]];
//                    NSLog(@"%p", cell);
//                    return cell.imageView.image;
//                }
//            }
//        }
//    }
//    return nil;
}

- (NSURL *)photoBrowser:(SDPhotoBrowser *)browser highQualityImageURLForIndex:(NSInteger)index{
    
    HomeBannerModel * model = self.bannerArr[index];

    return URLWITHSTRING(model.imgLocation);
}

#pragma mark--UITableViewDataSource
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 3;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{

    if (indexPath.section == 0) {
        FunctionTableViewCell * cell = [[FunctionTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:FountionCell dataArr:nil];
        cell.height = _categoryRowHeight;
        cell.interactor = self;
        [cell setupScrollView:self.categoryArr];
        //[cell setupScrollViewTest];
        return cell;
    }
    if (indexPath.section == 1) {
        ActivityTableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:ActivityCell];
        if (!cell) {
            NSArray * arr = [[NSBundle mainBundle] loadNibNamed:@"ActivityTableViewCell" owner:nil options:nil];
            for (UIView * view in arr) {
                if ([view isKindOfClass:[ActivityTableViewCell class]]) {
                    cell = (ActivityTableViewCell *)view;
                }
            }
//            cell = [[[NSBundle mainBundle] loadNibNamed:@"ActivityTableViewCell" owner:nil options:nil] firstObject];
            cell.interactor = self;
        }
        [cell setupView];
        return cell;
    }
    if (indexPath.section == 2) {
        RecommendTableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:RecommendCell];
        if (!cell) {
            cell = [[[NSBundle mainBundle] loadNibNamed:@"RecommendTableViewCell" owner:nil options:nil] firstObject];
            cell.interactor = self;
        }
        [cell setupView:self.recommendArr];
        return cell;
    }
    return nil;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    UIView * view;
    view.backgroundColor = colorFromHexString(@"0xF5F5F5");
    return view;
}

#pragma mark--UITableViewDelegate
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{

    if (indexPath.section == 0 && self.categoryArr) {
        
        CGFloat top = 15;
        CGFloat bottom = 25;
        CGFloat itemHeight;
        if (IS_IPAD_PRO || IS_IPAD) {
            itemHeight = 80;
        }else
        itemHeight = 59;
        NSInteger count = self.categoryArr.count;
        
        if (count == 0) {
            _categoryRowHeight = 0;
            return _categoryRowHeight;
        }

        if (count < 5 && count != 0) {//一行高度
            _categoryRowHeight = top + bottom + itemHeight;
            return _categoryRowHeight;
        }
        
        if (count > 4) {//两行高度
            _categoryRowHeight = top + bottom + itemHeight + (itemHeight + top) * 1;
            return  _categoryRowHeight;
        }
    }
    if (indexPath.section == 1) {
        if (IS_IPAD_PRO || IS_IPAD) {
            return 380;
        }
        return 230;
    }
    if (indexPath.section == 2) {
//        if (kScreenHeight <) {
//            <#statements#>
//        }
       // NSLog(@"%f", kScreenHeight);
        if (IS_IPAD_PRO || IS_IPAD) {
            return 450;
        }
        return 250;
    }
    return 0;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    if (section == 1) {
        return 10;
    }
    return 0;
}
#pragma mark--UIScrollViewDelegate
- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView{
    UIView * view = scrollView.superview;
    for (UIView * page in view.subviews) {
        if ([page isKindOfClass:[UIPageControl class]]) {
            UIPageControl * pageControl = (UIPageControl *)page;
            pageControl.currentPage = scrollView.contentOffset.x / kScreenWidth;
        }
    }
}
@end
