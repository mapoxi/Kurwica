//
//  AppDelegate.h
//  Kurwica
//
//  Created by Piotr Mlynarski on 12.02.2015.
//  Copyright (c) 2015 Piotr Mlynarski. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "NSManagedObject+CRUD.h"
#import "BezNozaNiePodchodz.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

- (void)aSprobujKurwaNieDodacEncji;

- (void)jakNieWypiszeszToWRyj;

@end

