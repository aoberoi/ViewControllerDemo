//
//  MasterViewController.h
//  ViewControllerDemo
//
//  Created by Ankur Oberoi on 7/18/14.
//  Copyright (c) 2014 Ankur Oberoi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

