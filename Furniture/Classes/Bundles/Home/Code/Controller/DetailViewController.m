//
//  DetailViewController.m
//  Furniture
//
//  Created by 杨肖宇 on 2017/3/24.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = YES;
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    self.navigationController.navigationBarHidden = NO;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupUI];
}

- (void)setupUI{
    
    [self createHeader];
    
    [self createSwitchView];
    
    [self createFootter];
}

- (void)createHeader{
    
//    [];
}

- (void)createSwitchView{
    
}

- (void)createFootter{
    
    UIView * view = [[UIView alloc] initWithFrame:CGRectMake(0, kScreenHeight - 40, kScreenWidth, 40)];
    
    UIButton * shoppingCarBtn = [[UIButton alloc] initWithFrame:CGRectMake(0.4 * kScreenWidth, 0, 0.3 * kScreenWidth, 40)];
    [shoppingCarBtn setTitle:@"加入购物车" forState:UIControlStateNormal];
    
    [view addSubview:shoppingCarBtn];
    
    UIButton * buyBtn = [[UIButton alloc] initWithFrame:CGRectMake(0.7 * kScreenWidth, 0, 0.3 * kScreenWidth, 40)];
    [buyBtn setTitle:@"立即购买" forState:UIControlStateNormal];
    
    [view addSubview:buyBtn];
    [self.view addSubview:view];
}

@end
