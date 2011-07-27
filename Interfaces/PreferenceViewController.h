//
//  PreferenceViewController.h
//  Hangulize
//
//  Created by youknowone on 11. 1. 29..
//  Copyright 2011 3rddev Inc. All rights reserved.
//

@interface PreferenceViewController : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource> {
	IBOutlet HangulizeViewController *hangulizeViewController;
	IBOutlet UIView *bannerView;
}

- (IBAction) done;

@end

@interface LanguageView: UIView {	
	IBOutlet UILabel *nameLabel, *codeLabel;
}

- (id)initWithName:(NSString *)name code:(NSString *)code;
+ (LanguageView *)viewWithName:(NSString *)name code:(NSString *)code;

@end