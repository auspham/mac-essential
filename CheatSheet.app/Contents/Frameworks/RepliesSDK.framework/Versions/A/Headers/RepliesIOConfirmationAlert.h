//
//  RepliesConfirmationAlert.h
//  RepliesSDK
//
//  Created by Stefan Fuerst on 27.06.16.
//  Copyright (c) 2016 Replies. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RepliesIOMessage.h"

@interface RepliesIOConfirmationAlert : NSAlert

+(instancetype)alertWithMessage:(RepliesIOMessage *)message;

@end
