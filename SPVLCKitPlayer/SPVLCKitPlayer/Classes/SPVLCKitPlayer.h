//
//  SPVLCKitPlayer.h
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MobileVLCKit/MobileVLCKit.h>

#import "SPVLCKitConst.h"
#import "SPVideoControlView.h"

@interface SPVLCKitPlayer : UIView <
    VLCMediaPlayerDelegate,
    SPVideoControlViewDelegate
>

@property (nonatomic,strong,nonnull) NSURL *mediaURL;
@property (nonatomic,assign) BOOL isFullscreenModel;

- (void)showInView:(UIView * _Nonnull)view;

@end
