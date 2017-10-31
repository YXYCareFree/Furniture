//
//  HomeViewInteractor.h
//  Furniture
//
//  Created by beyondSoft on 17/1/3.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDCycleScrollView.h"

@class HomeViewController;

@interface HomeViewInteractor : NSObject<UITableViewDelegate, UITableViewDataSource, SDCycleScrollViewDelegate>

@property (nonatomic, assign) HomeViewController * controller;

- (void)refreshHome;

- (void)endRefreshHome;

- (void)loadHome;

- (void)scanClicked:(id)sender;

- (void)ARClicked:(id)sender;
//热门活动点击
- (void)activityImageViewClicked:(UITapGestureRecognizer *)tap;
//商品推荐点击
- (void)recommendImageViewClicked:(UITapGestureRecognizer *)tap;

- (void)searchClicked:(id)sender;
//商品分类点击
- (void)categoryClicked:(UITapGestureRecognizer *)tap;

@end
