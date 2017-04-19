//
//  SDKTools.h
//  Unity-iPhone
//
//  Created by Ray on 17/1/17.
//
//

#import <Foundation/Foundation.h>

@interface SDKTools : NSObject

@property (retain, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *modelsID;


+ (id)sharedInstance;
- (void)changeModelPathString:(NSString *)path group:(int)index;
-(void)getModelsID:(NSString *)str;


@end
