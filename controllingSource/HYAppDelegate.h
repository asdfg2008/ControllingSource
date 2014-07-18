//
//  HYAppDelegate.h
//  controllingSource
//
//  Created by crg on 14-7-18.
//  Copyright (c) 2014年 crg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HYAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
