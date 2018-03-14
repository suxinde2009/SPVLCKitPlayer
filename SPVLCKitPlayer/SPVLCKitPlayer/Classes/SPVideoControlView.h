//
//  SPVideoControlView.h
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "SPVLCKitConst.h"
#import "SPVideoHUDView.h"

@interface SPProgressSlider : UISlider
@end

@interface UILabel (ConfigureAble)
- (void)configureWithTime:(NSString *)time isLeft:(BOOL)left;
- (void)configureWithLight;
- (void)configureWithVolume:(float)volume;
@end

@protocol SPVideoControlViewDelegate <NSObject>
@optional
- (void)controlViewFingerMoveUp;
- (void)controlViewFingerMoveDown;
- (void)controlViewFingerMoveLeft;
- (void)controlViewFingerMoveRight;

@end

@interface SPVideoControlView : UIView

@property (nonatomic,weak) id<SPVideoControlViewDelegate> delegate;

@property (nonatomic, strong) UIView *topBar;
@property (nonatomic, strong) UIView *bottomBar;
@property (nonatomic, strong) UIButton *playButton;
@property (nonatomic, strong) UIButton *pauseButton;
@property (nonatomic, strong) UIButton *fullScreenButton;
@property (nonatomic, strong) UIButton *shrinkScreenButton;
@property (nonatomic, strong) SPProgressSlider *progressSlider;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UILabel *timeLabel;
@property (nonatomic, strong) SPVideoHUDView *indicatorView;
@property (nonatomic, strong) CALayer *bgLayer;
@property (nonatomic, strong) UISlider *volumeSlider;
@property (nonatomic, strong) MPVolumeView *volumeView;
@property (nonatomic, strong) UILabel *alertLbl;

- (void)animateHide;
- (void)animateShow;
- (void)autoFadeOutControlBar;
- (void)cancelAutoFadeOutControlBar;

@end
