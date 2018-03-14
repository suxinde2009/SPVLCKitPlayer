//
//  SPVideoHUDView.h
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SPVideoHUDView : UIView

@end

@interface SPVideoAlertView : UIView
@property (nonatomic,strong) UILabel *msgLbl;
+ (instancetype)shareInstance;
- (void)show;
@end
