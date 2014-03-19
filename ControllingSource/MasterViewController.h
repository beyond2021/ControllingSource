//
//  MasterViewController.h
//  ControllingSource
//
//  Created by KEEVIN MITCHELL on 3/19/14.
//  Copyright (c) 2014 Beyond 2021. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
