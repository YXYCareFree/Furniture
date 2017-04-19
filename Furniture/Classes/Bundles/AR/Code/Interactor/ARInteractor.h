//
//  ARInteractor.h
//  Furniture
//
//  Created by 杨肖宇 on 2017/4/6.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ARController;

@interface ARInteractor : NSObject<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) ARController * controller;

- (void)loadGoodsList;

- (void)backBtnClicked:(UIButton *)btn;

- (void)confirmBtnClicked:(UIButton *)btn;

@end
