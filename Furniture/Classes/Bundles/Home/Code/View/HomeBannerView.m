//
//  HomeBannerView.m
//  Furniture
//
//  Created by beyondSoft on 17/1/3.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "HomeBannerView.h"
#import "SDCycleScrollView.h"
#import "HomeBannerModel.h"

@interface HomeBannerView ()

@property (nonatomic, strong) SDCycleScrollView * bannerView;

@end

@implementation HomeBannerView

- (void)drawRect:(CGRect)rect {
    
    [self addSubview:self.bannerView];
}

- (void)createBannerView:(NSArray *)dataArr{
    
    NSMutableArray * urlArr = [NSMutableArray new];
    for (HomeBannerModel * model in dataArr) {
        [urlArr addObject:URLWITHSTRING(model.imgLocation)];
    }
    _bannerView.imageURLStringsGroup = urlArr;

    [self addSubview:_bannerView];
}

- (SDCycleScrollView *)bannerView{

    if (_bannerView == nil) {
        NSArray * data = @[@"bg_my_banner"];
        _bannerView = [SDCycleScrollView cycleScrollViewWithFrame:self.frame imageNamesGroup:data];
        _bannerView.delegate = self.interactor;
        _bannerView.scrollDirection = UICollectionViewScrollDirectionHorizontal;
        _bannerView.autoScrollTimeInterval = 3;
    }
    return _bannerView;
}

- (void)refreshBanner:(NSArray *)dataArr{
    
    [self createBannerView:dataArr];
}

@end
