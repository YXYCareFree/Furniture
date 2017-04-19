//
//  ARViewController.h
//
//  Created by Daniel Arantes Loverde on 7/10/14.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"


@interface ARViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>


@property (retain, nonatomic) NSMutableDictionary *pathDic;
@property (retain, nonatomic) NSString *modelsID;

@end
