//
//  HomeBannerView.h
//  Furniture
//
//  Created by beyondSoft on 17/1/3.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HomeViewInteractor;

@interface HomeBannerView : UIView

@property (nonatomic, weak) HomeViewInteractor * interactor;

- (void)refreshBanner:(NSArray *)dataArr;

@end
