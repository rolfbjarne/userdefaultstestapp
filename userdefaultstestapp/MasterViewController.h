//
//  MasterViewController.h
//  userdefaultstestapp
//
//  Created by Rolf Bjarne Kvinge on 24/06/16.
//  Copyright © 2016 Rolf Bjarne Kvinge. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

