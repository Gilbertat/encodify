//
//  EncodeBaseViewController.h
//  encodify
//
//  Created by 洪朔 on 16/8/31.
//  Copyright © 2016年 Tuccuay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EncodeBaseViewController : UIViewController

- (NSString *)encodeWithBase64:(NSString *)inputString;
- (NSString *)encodeWithUnicode:(NSString *)inputString;
- (NSString *)encodeWithMorse:(NSString *)inputString;
- (NSString *)encodeWithURI:(NSString *)inputString;

- (NSString *)encodeButtonTitle;
@end
