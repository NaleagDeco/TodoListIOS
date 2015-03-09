//
//  ToDoItem.h
//  ToDoList
//
//  Created by Gaelan D'costa on 2015-03-06.
//  Copyright (c) 2015 Gaelan D'costa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
