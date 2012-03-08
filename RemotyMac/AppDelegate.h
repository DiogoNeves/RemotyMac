//
//  AppDelegate.h
//  RemotyMac
//
//  Created by Diogo Neves on 08/03/2012.
//  Copyright (c) 2012 Wildbunny Ltd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MediaKeyApplication : NSApplication

-(BOOL)mediaKeyEvent:(int)key state:(BOOL)state repeat:(BOOL)repeat;

@end

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
