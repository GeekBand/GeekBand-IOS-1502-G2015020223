//
//  LZMViewDetailController.h
//  LZIOSPro_Moran
//
//  Created by comst on 15/11/4.
//  Copyright (c) 2015年 com.comst1314. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LZMViewDetailController.h"
#import "LZMPictureModel.h"
@interface LZMSquareController : UIViewController
@property (nonatomic, strong) LZMPictureModel *pictureModel;
- (void)showDetailImage;
@end
