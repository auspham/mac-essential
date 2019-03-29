//
//  RepliesIOMessage.h
//  RepliesSDK
//
//  Created by Stefan Fuerst on 24.06.16.
//  Copyright (c) 2016 Replies. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RepliesIOMessage : NSObject

@property (nonatomic,strong) NSString * subject;
@property (nonatomic,strong) NSString * body;
@property (nonatomic,strong) NSString * email;
@property (nonatomic,strong) NSString * sender;
@property (nonatomic,strong) NSString * productName;
@property (nonatomic,strong) NSDictionary * metaData;
@property (nonatomic,strong) NSArray * attachments;

@end
