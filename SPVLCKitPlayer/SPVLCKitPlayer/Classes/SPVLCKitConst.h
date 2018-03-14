//
//  SPVLCKitConst.h
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kMediaLength self.player.media.length
#define kHUDCenter CGPointMake(CGRectGetWidth(self.bounds) / 2, CGRectGetHeight(self.bounds) / 2);
#define MRRGB(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define kMRSCREEN_BOUNDS [[UIScreen mainScreen] bounds]

/*************** HUD ****************************/
static const NSTimeInterval kHUDCycleTimeInterval = 0.8f;
static const CGFloat kHUDCycleLineWidth = 3.0f;

/*************** Control ****************************/
static const CGFloat MRProgressWidth = 3.0f;
static const CGFloat MRVideoControlBarHeight = 40.0;
static const CGFloat MRVideoControlSliderHeight = 10.0;
static const CGFloat MRVideoControlAnimationTimeinterval = 0.3;
static const CGFloat MRVideoControlTimeLabelFontSize = 10.0;
static const CGFloat MRVideoControlBarAutoFadeOutTimeinterval = 4.0;
static const CGFloat MRVideoControlCorrectValue = 3;
static const CGFloat MRVideoControlAlertAlpha = 0.75;
