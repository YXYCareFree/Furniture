//
//  YXYUIWebViewController.m
//  Furniture
//
//  Created by 王小娜 on 2017/2/17.
//  Copyright © 2017年 beyondSoft. All rights reserved.
//

#import "YXYUIWebViewController.h"
#import <objc/runtime.h>
#import "YXYJSMethodBase.h"
#import <WebKit/WebKit.h>
#import "WebViewJavascriptBridge.h"
#import "Masonry.h"

@interface YXYUIWebViewController ()<UIWebViewDelegate>{
    NSString * detailbaseUrl;
    NSString * categoryBaseURL;
    NSString * searchUrl;
}

@property (nonatomic, strong) YXYJSMethodBase * jsMethodBase;
@property (nonatomic, strong) UIWebView * webView;
@property (nonatomic, strong) WebViewJavascriptBridge * bridge;
@property (nonatomic, strong) UIView * progressView;
@property (nonatomic, strong) CALayer * progressLayer;
@end

@implementation YXYUIWebViewController

- (void)dealloc{
    NSLog(@"\n***==%@: dealloc", NSStringFromClass([self class]));
}

- (void)viewWillAppear:(BOOL)animated{
    self.navigationController.navigationBarHidden = YES;
    [super viewWillAppear:animated];
}

- (void)viewWillDisappear:(BOOL)animated{
    self.navigationController.navigationBarHidden = NO;
    [super viewWillDisappear:animated];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    detailbaseUrl = [NSString stringWithFormat:@"%@/mall/app/prodDetail.htm?commodityCode=", BASE_URL];
    categoryBaseURL = [NSString stringWithFormat:@"%@/mall/app/prodList.htm?categoryCode=", BASE_URL];
    searchUrl = [NSString stringWithFormat:@"%@/mall/app/prodList.htm?", BASE_URL];
    
    [self createUIWebView];
    [self addProgressView];
    [self registerJSMethod];
    
}

- (void)createUIWebView{
    NSLog(@"UIWebView::%p", self);
    [[NSURLCache sharedURLCache] removeAllCachedResponses];
    _webView = [[UIWebView alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, kScreenHeight)];
    _webView.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:_webView];
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.bridge = [WebViewJavascriptBridge bridgeForWebView:_webView];
    [self.bridge setWebViewDelegate:self];
    
    [self loadWebView];
}

- (void)addProgressView{
    
    _progressView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kScreenWidth, 3)];
    _progressView.backgroundColor = [UIColor clearColor];
    
    CALayer *layer = [CALayer layer];
    layer.frame = CGRectMake(0, 0, 0, 3);
    layer.backgroundColor = COLOR_MAIN.CGColor;
    [_progressView.layer addSublayer:layer];
    self.progressLayer = layer;
}

- (void)registerJSMethod{
    
    _jsMethodBase = [YXYJSMethodBase shareYXYJSMethodBase];
    _jsMethodBase.UIWebViewBridge = self.bridge;
    [_jsMethodBase registerJSMehod];
}

#pragma mark--UIWebViewDelegate
- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType{
    return YES;
}

- (void)webViewDidStartLoad:(UIWebView *)webView{
    
    for (UIView * view in _webView.subviews) {
        
        if ([view isKindOfClass:[UILabel class]] || [view isKindOfClass:[UIImageView class]] || [view isKindOfClass:[UIButton class]]) {
            [view removeFromSuperview];
        }
    }
    [_webView addSubview:_progressView];
    webView.scrollView.scrollEnabled = YES;

    [UIView animateWithDuration:5 animations:^{
        self.progressLayer.frame = CGRectMake(0, 0, kScreenWidth * 0.7, 3);
    }];
}

- (void)webViewDidFinishLoad:(UIWebView *)webView{
    [UIView animateWithDuration:0.2 animations:^{
        self.progressLayer.frame = _progressView.frame;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [self.progressView removeFromSuperview];
        });
    }];
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error{
    
    [UIView animateWithDuration:0.2 animations:^{
        self.progressLayer.frame = _progressView.frame;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(.2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [self.progressView removeFromSuperview];
        });
    }];
    
    [self handelFailLoadWebView];
}

- (void)handelFailLoadWebView{
    
    _webView.scrollView.scrollEnabled = NO;
    
    UIImageView * imageView = [UIImageView new];
    imageView.image = readImageFromImageName(@"no_network");
    UILabel * tipLable1 = [UILabel new];
    UILabel * tipLabel2 = [UILabel new];
    [_webView addSubview:imageView];
    [_webView addSubview:tipLable1];
    [_webView addSubview:tipLabel2];
    [imageView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(_webView);
        make.centerY.equalTo(_webView).offset(-100);
    }];
    
    tipLable1.text = @"亲，网络不给力哦！";
    tipLable1.textColor = colorFromHexString(@"999999");
    [tipLable1 mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(_webView);
        make.top.equalTo(imageView.bottom).offset(30);
    }];
    tipLabel2.text = @"刷新一下试试吧";
    tipLabel2.textColor = colorFromHexString(@"999999");
    [tipLabel2 mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(_webView);
        make.top.equalTo(tipLable1.bottom).offset(20);
    }];
    
    UIButton * refreshBtn = [UIButton new];
    UIButton * backBtn = [UIButton new];
    [_webView addSubview:refreshBtn];
    [_webView addSubview:backBtn];
    
    [refreshBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(_webView).offset(-50);
        make.top.equalTo(tipLabel2.bottom).offset(40);
        make.width.equalTo(80);
        make.height.equalTo(40);
    }];
    [backBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(_webView).offset(50);
        make.top.equalTo(tipLabel2.bottom).offset(40);
        make.width.equalTo(80);
        make.height.equalTo(40);
    }];
    
    refreshBtn.titleLabel.font = FONT(20);
    backBtn.titleLabel.font = FONT(20);
    
    [refreshBtn setTitle:@"刷新" forState:UIControlStateNormal];
    [backBtn setTitle:@"返回" forState:UIControlStateNormal];
    [refreshBtn setTitleColor:COLOR_MAIN forState:UIControlStateNormal];
    [backBtn setTitleColor:COLOR_MAIN forState:UIControlStateNormal];
    refreshBtn.layer.masksToBounds = backBtn.layer.masksToBounds = YES;
    refreshBtn.layer.cornerRadius = backBtn.layer.cornerRadius = 20.f;
    refreshBtn.layer.borderWidth = backBtn.layer.borderWidth = 1;
    refreshBtn.layer.borderColor = backBtn.layer.borderColor = COLOR_MAIN.CGColor;
    [refreshBtn addTarget:self action:@selector(loadWebView) forControlEvents:UIControlEventTouchUpInside];
    [backBtn addTarget:self action:@selector(back) forControlEvents:UIControlEventTouchUpInside];
}

- (void)loadWebView{
    
    NSMutableURLRequest * request = [NSMutableURLRequest new];
    request.timeoutInterval = 10.0;
    
    if ([self.type isEqualToString:@"category"]) {
        
        request.URL = URLWITHSTRING([categoryBaseURL stringByAppendingString:_code]);
        [_webView loadRequest:request];
        
    }else if ([self.type isEqualToString:@"detail"]) {

        request.URL = URLWITHSTRING([detailbaseUrl stringByAppendingString:_code]);
        [_webView loadRequest:request];
        
    }else if ([self.type isEqualToString:@"search"]){
        
        NSString * url = [NSString stringWithFormat:@"%@forSearch=%@&isAr=%@", searchUrl, _forSearch, _isAr];
        request.URL = URLWITHSTRING(url);
        [_webView loadRequest:request];
        
    }else{
        
        NSLog(@"url === %@", _url);
        request.URL = URLWITHSTRING(_url);
        [_webView loadRequest:request];
    }
}

- (void)back{
    [self.navigationController popViewControllerAnimated:YES];
}

@end
