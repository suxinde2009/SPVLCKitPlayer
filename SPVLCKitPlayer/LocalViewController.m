//
//  LocalViewController.m
//  SPVLCKitPlayer
//
//  Created by SuXinDe on 2018/3/13.
//  Copyright © 2018年 SkyPrayer Studio. All rights reserved.
//

#import "LocalViewController.h"
#import "SPVLCKitPlayer.h"

@interface LocalViewController ()

@end

@implementation LocalViewController

- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    if ([self respondsToSelector:@selector(setNeedsStatusBarAppearanceUpdate)]) {
        [self prefersStatusBarHidden];
        [self performSelector:@selector(setNeedsStatusBarAppearanceUpdate)];
    }
}

- (IBAction)localPlay:(id)sender {
    SPVLCKitPlayer *player = [[SPVLCKitPlayer alloc] init];
    player.bounds = CGRectMake(0,
                               0,
                               self.view.bounds.size.width,
                               self.view.bounds.size.width / 16 * 9);
    player.center = self.view.center;
    player.mediaURL = [[NSBundle mainBundle] URLForResource:@"1" withExtension:@"mov"];
    [player showInView:self.view.window];
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

@end
