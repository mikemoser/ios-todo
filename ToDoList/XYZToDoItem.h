//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Michael Moser on 2/27/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property (nonatomic, retain) NSString *itemName;
@property BOOL completed;
@property (readonly, nonatomic, retain) NSDate *creationDate;

@end
