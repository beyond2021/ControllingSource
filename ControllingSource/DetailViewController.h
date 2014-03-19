//
//  DetailViewController.h
//  ControllingSource
//
//  Created by KEEVIN MITCHELL on 3/19/14.
//  Copyright (c) 2014 Beyond 2021. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
