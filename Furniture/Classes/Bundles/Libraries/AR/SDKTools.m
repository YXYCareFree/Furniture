//
//  SDKTools.m
//  Unity-iPhone
//
//  Created by Ray on 17/1/17.
//
//

#import "SDKTools.h"
#import "UnityAppController.h"

static SDKTools *selfClass = nil;

static const char* modelPath;
static const char* modelsID;

@implementation SDKTools

+ (id)sharedInstance
{
    static SDKTools *sdkt = nil;
    
    @synchronized(self)
    {
        if (!sdkt)
            sdkt = [[self alloc] init];
        
        selfClass = sdkt;
        
    }
    return sdkt;
}

- (void)changeModelPathString:(NSString *)path group:(int)index
{
    _modelPath = [NSString stringWithFormat:@"%d|file://%@", index, path];
    NSLog(@"\n\n\n*****%@\n\n\n", _modelPath);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        _modelPath = @"default";
    });
}

- (NSString *)getModelPath
{
    if (_modelPath == nil) {
        _modelPath = @"default";
    }
    return _modelPath;
}


void _PressButton()
{
    [[[UIAlertView alloc] initWithTitle:@"demo" message:@"Test" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK", nil] show];
}

char* _Get3dModelPath ()
{
//    NSLog(@"Model Path: %@", [selfClass getModelPath]);
    return _MakeStringCopy([[selfClass getModelPath] UTF8String]);
}
-(void)getModelsID:(NSString *)str{

    selfClass.modelsID = str;
    
}

/*char* _ModelsID ( const char* string)
{
    NSString *modelsName = [NSString stringWithUTF8String:string];
    
    modelsID = string;
    
    NSLog(@"%@", modelsName);
    
    return NULL;
}

- (NSString *)modelsID
{
    
    return [NSString stringWithUTF8String:modelsID];
}*/

char* _ShowView ()
{
//    UnityAppController *unityDe = (UnityAppController *)[UIApplication sharedApplication].delegate;
//    if (unityDe.window.windowLevel == UIWindowLevelNormal){w
//        unityDe.window.windowLevel = UIWindowLevelNormal - 1;
//    }
//    [unityDe.appWindow makeKeyAndVisible];
    
    return _MakeStringCopy([@"123" UTF8String]);
}

char* _MakeStringCopy( const char* string)
{
    if (NULL == string) {
        return NULL;
    }
    char* res = (char*)malloc(strlen(string)+1);
    strcpy(res, string);
    return res;
}

@end
