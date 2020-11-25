//
//  LELog.h
//  lelib
//
//  Created by Petr on 25/11/13.
//  Copyright (c) 2013,2014 Logentries. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LELog : NSObject

+ (LELog *)sharedInstance;
+ (LELog *)sessionWithToken:(NSString *)token;

/// Display all messages on TTY for debug purposes.
@property (nonatomic) BOOL debugLogs;

/// Appends space separated token to each log message.
@property (nullable, atomic, copy) NSString *token;

/**
 When object implements LELoggableObject interface, it logs return value of
 leDescription method. Otherwise, tries to log return value of standard
 description method.
 */
- (void)log:(NSString *)object;

+ (void)log:(NSString *)object;

/**
 Log UIApplicationDidFinishLaunchingNotification, UIApplicationDidBecomeActiveNotification,
 UIApplicationWillEnterForegroundNotification, UIApplicationWillResignActiveNotification,
 UIApplicationWillTerminateNotification.
 */
@property (nonatomic, assign) BOOL logApplicationLifecycleNotifications;

@end

NS_ASSUME_NONNULL_END
