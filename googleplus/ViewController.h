//
//  ViewController.h
//  googleplus
//
//  Created by Yosemite on 5/19/16.
//  Copyright (c) 2016 Yosemite. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GooglePlus/GooglePlus.h>
#import <GoogleOpenSource/GoogleOpenSource.h>
@class GPPSignInButton;
@interface ViewController : UIViewController
@property (retain, nonatomic) IBOutlet GPPSignInButton *signInButton;

@end

