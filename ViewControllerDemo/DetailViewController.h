//
//  DetailViewController.h
//  ViewControllerDemo
//
//  Created by Ankur Oberoi on 7/18/14.
//  Copyright (c) 2014 Ankur Oberoi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

