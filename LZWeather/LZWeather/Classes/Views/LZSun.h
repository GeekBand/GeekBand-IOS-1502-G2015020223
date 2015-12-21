//
//  LZSun.h
//  LZWeather
//
//  Created by comst on 15/11/25.
//  Copyright (c) 2015年 com.comst1314. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LZSun : UIView

@property (nonatomic, assign) CGRect upRect;
@property (nonatomic, assign) CGRect downRect;

- (void)showWithDuration:(CGFloat)duration;

- (void)hideWithDuration:(CGFloat)duration;

@end
