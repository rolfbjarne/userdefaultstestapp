//
//  DetailViewController.h
//  userdefaultstestapp
//
//  Created by Rolf Bjarne Kvinge on 24/06/16.
//  Copyright © 2016 Rolf Bjarne Kvinge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

