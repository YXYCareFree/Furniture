//
//  ARViewController.m
//
//  Created by Daniel Arantes Loverde on 7/10/14.
//
//

#import "ARViewController.h"
#import "SDKTools.h"
#import "AlvaTool.h"

#import <QuartzCore/QuartzCore.h>

#define SCREEN_WIDTH  [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

static const char* allmodelsID;


@interface ARViewController ()
{
    UITableView *mTableView;
}
@end

@implementation ARViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    [[AlvaTool sharedInstance] unityPause:NO];
    
//    [self.navigationController setNavigationBarHidden:YES];
    UIBarButtonItem *barItem = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(leftAction)];
    self.navigationItem.leftBarButtonItem = barItem;
    
    
    UIView *backView = [[UIView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    [self.view addSubview:backView];
    //获得unityView
    UIView *unityView = [[AlvaTool sharedInstance] getUnityView];

    [backView addSubview:unityView];
    
    [self initTableView];
   // [self addClearButton];
    
}
- (void)viewWillDisappear:(BOOL)animated
{
    // 清除模型
    [super viewWillDisappear:animated];
    [self clearModel];

}

- (void)initTableView
{
    mTableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, 200, 300) style:UITableViewStyleGrouped];
    mTableView.delegate = self;
    mTableView.dataSource = self;
    [mTableView setSeparatorColor:[UIColor clearColor]];
    [mTableView setBackgroundColor:[UIColor clearColor]];
    [self.view addSubview:mTableView];

}

- (void)addClearButton
{
    UIButton *clearBtn = [[UIButton alloc] initWithFrame:CGRectMake(SCREEN_WIDTH - 100, 100, 100, 100)];
    [clearBtn setBackgroundColor:[UIColor blueColor]];
    [clearBtn setTitle:@"clear" forState:UIControlStateNormal];
    [clearBtn addTarget:self action:@selector(clearModel) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:clearBtn];
}

- (void)leftAction{
   
    [[AlvaTool sharedInstance] unityPause:YES];
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)clearModel
{
    UnitySendMessage("GameObjectController", "clearAll", "");
}


extern "C" char* _ModelsID ( const char* string)
{
    if (string != NULL) {
        
        NSString *modelsName = [NSString stringWithUTF8String:string];
        
        allmodelsID = string;
        
        NSLog(@"%@", modelsName);
//        [[SDKTools sharedInstance] getModelsID:modelsName];
    }
    return NULL;
}

- (NSString *)modelsID
{

    return [NSString stringWithUTF8String:allmodelsID];
}
#pragma mark - TableViewDelegate
-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 44;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 30;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    NSString *item = [[_pathDic objectForKey:[NSNumber numberWithInteger:indexPath.section]] objectAtIndex:indexPath.row];
    [[SDKTools sharedInstance] changeModelPathString:item group:(int)indexPath.section];

}

#pragma mark - TableViewDataSource
-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return [_pathDic count];
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [[_pathDic objectForKey:[NSNumber numberWithInteger:section]] count];
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *item = [[_pathDic objectForKey:[NSNumber numberWithInteger:indexPath.section]] objectAtIndex:indexPath.row];
    
    NSString *sid = @"tableView";
    UITableViewCell *cell = nil;//[tableView dequeueReusableCellWithIdentifier:sid];
    if(cell == nil)
    {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:sid];
    }
    [cell setBackgroundColor:[UIColor clearColor]];
    
    [cell.textLabel setBackgroundColor:[UIColor clearColor]];
    [cell.textLabel setText:[item lastPathComponent]];
    [cell.textLabel setTextColor:[UIColor whiteColor]];
    [cell.textLabel setFont:[UIFont systemFontOfSize:10]];
    
    return cell;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, 44)];
    [label setBackgroundColor:[UIColor clearColor]];
    [label setText:[NSString stringWithFormat:@"Group:%ld", (long)section]];
    [label setTextColor:[UIColor whiteColor]];
    
    return label;
    
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma MARK -- Methods
-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

@end
