//
//  XYZToDoListViewController.h
//  ToDoList
//
//  Created by Michael Moser on 2/26/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZToDoListViewController : UITableViewController

- (void) receiveNewItemAddedNotification:(NSNotification *) notification;
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
