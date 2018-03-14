//
//  RemoteViewController.m
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import "RemoteViewController.h"
#import "SPVLCKitPlayer.h"

@interface RemoteViewController ()

@end

@implementation RemoteViewController

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    if ([self respondsToSelector:@selector(setNeedsStatusBarAppearanceUpdate)]) {
        [self prefersStatusBarHidden];
        [self performSelector:@selector(setNeedsStatusBarAppearanceUpdate)];
    }
}

- (IBAction)remotePlay:(id)sender {
    SPVLCKitPlayer *player = [[SPVLCKitPlayer alloc] init];
    player.bounds = CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.width / 16 * 9);
    player.center = self.view.center;
    player.mediaURL = [NSURL URLWithString:@"https://mvvideo5.meitudata.com/56ea0e90d6cb2653.mp4"];
    [player showInView:self.view.window];
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

@end
