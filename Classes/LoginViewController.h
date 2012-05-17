//
//  LoginViewController.h
//  Vault
//
//  Created by Jace Allison on 12/22/11.
//  Copyright (c) 2011 Issaquah High School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>
#import <Security/Security.h>
#import "VaultUser.h"
#import "AuthUserDetail.h"
#import "Constants.h"
#import "KeychainItemWrapper.h"

@interface LoginViewController : UIViewController <UIAlertViewDelegate, RKObjectLoaderDelegate>

@property(strong, nonatomic) IBOutlet UITextField *emailField;      /* Text field where user inputs username */
@property(strong, nonatomic) IBOutlet UITextField *passwordField;   /* Text field where user inputs password */
@property(strong, nonatomic) IBOutlet UIButton *loginBtn;           /* Button user presses to login */
@property(strong, nonatomic) IBOutlet UIButton *clearBtn;           /* Button to clear everything in the text fields */
@property(strong, nonatomic) KeychainItemWrapper *keychain;         
@property (nonatomic, retain) RKObjectManager * authManager;        /* Object Manager for authentication only */

- (IBAction)hideKeyboard:(id)sender;
- (IBAction)clearFields:(id)sender;
- (IBAction)login:(id)sender;

@end
