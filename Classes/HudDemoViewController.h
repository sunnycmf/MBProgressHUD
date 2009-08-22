//
//  HudDemoViewController.h
//  HudDemo
//
//  Created by Matej Bukovinski on 21.7.09.
//  Copyright bukovinski.com 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"

@interface HudDemoViewController : UIViewController <MBProgressHUDDelegate> {
	MBProgressHUD *HUD;
}

- (IBAction) showSimple:(id)sender;
- (IBAction) showWithLabel:(id)sender;
- (IBAction) showWithDetailsLabel:(id)sender;
- (IBAction) showWithLabelDeterminate:(id)sender;
- (IBAction) showWithLabelMixed:(id)sender;

- (void) myTask;
- (void) myProgressTask;
- (void) myMixedTask;

@end

