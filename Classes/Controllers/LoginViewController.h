//
//  LoginViewController.h
//  DGSPhone
//
//  Created by Justin Weiss on 6/2/10.
//  Copyright 2010 Justin Weiss. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DGS.h"
#import "SpinnerView.h"


@interface LoginViewController : UITableViewController <LoginProtocol> {
	NSString *username;
	NSString *password;
	DGS *dgs;
	id delegate;
	SpinnerView *spinnerView;
}

@property (nonatomic, retain) SpinnerView *spinnerView;

@property(nonatomic, copy) NSString *username;
@property(nonatomic, copy) NSString *password;
@property(nonatomic, retain) DGS *dgs;
@property(nonatomic, assign) id delegate;

- (void)login;
- (void)requestCancelled;

@end

