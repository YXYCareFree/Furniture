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

- (void)loadHome;

- (void)scanClicked:(id)sender;

- (void)ARClicked:(id)sender;

- (void)activityImageViewClicked:(UITapGestureRecognizer *)tap;

- (void)recommendImageViewClicked:(UITapGestureRecognizer *)tap;

- (void)searchClicked:(id)sender;

- (void)categoryClicked:(UITapGestureRecognizer *)tap;
@end
