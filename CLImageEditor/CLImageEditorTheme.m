//
//  CLImageEditorTheme.m
//
//  Created by sho yakushiji on 2013/12/05.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import "CLImageEditorTheme.h"

@implementation CLImageEditorTheme

#pragma mark - singleton pattern

static CLImageEditorTheme *_sharedInstance = nil;

+ (CLImageEditorTheme*)theme
{
    static dispatch_once_t  onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[CLImageEditorTheme alloc] init];
    });
    return _sharedInstance;
}

+ (id)allocWithZone:(NSZone *)zone
{
    @synchronized(self) {
        if (_sharedInstance == nil) {
            _sharedInstance = [super allocWithZone:zone];
            return _sharedInstance;
        }
    }
    return nil;
}

- (id)copyWithZone:(NSZone *)zone
{
    return self;
}

- (id)init
{
    self = [super init];
    if (self) {
        self.bundleName                     = @"CLImageEditor";
        self.backgroundColor                = [UIColor colorWithWhite:0.05f alpha:1.0f];
        self.navigationBarStyle             = UIBarStyleBlack;
        self.navigationBarTintColor         = [UIColor colorWithRed:((float)0x54/(float)0xff) green:((float)0xbd/(float)0xff) blue:((float)0xff/(float)0xff) alpha:1.0f];
        self.toolbarColor                   = [UIColor blackColor];
        self.toolIconColor                  = @"leonard-blue";
        self.toolbarTextColor               = [UIColor colorWithRed:((float)0x54/(float)0xff) green:((float)0xbd/(float)0xff) blue:((float)0xff/(float)0xff) alpha:1.0f];
        self.toolbarSelectedButtonColor     = [[UIColor whiteColor] colorWithAlphaComponent:0.2];
        self.toolbarTextFont                = [UIFont systemFontOfSize:10];
        self.statusBarStyle                 = UIStatusBarStyleDefault;
    }
    return self;
}

@end
