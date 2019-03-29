//
//  RepliesIOAttachment.h
//  RepliesSDK
//
//  Created by Stefan Fuerst on 24.06.16.
//  Copyright (c) 2016 Replies. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RepliesIOAttachment : NSObject

+(instancetype)attachmentWithPath:(NSString *)path;
+(instancetype)attachmentWithString:(NSString *)string fileName:(NSString *)fileName;
+(instancetype)attachmentWithData:(NSData *)data fileName:(NSString *)fileName;
+(instancetype)attachmentWithPropertyList:(id)propertyList fileName:(NSString *)fileName;
+(instancetype)attachmentWithApplicationLog;
+(instancetype)attachmentWithLogForProcessName:(NSString *)processName;
-(void)open;
@property (nonatomic,strong) NSData * data;
@property (nonatomic,strong) NSString * mimeType;
@property (nonatomic,strong) NSString * fileName;
@property (nonatomic,strong) NSString * path;
@property (nonatomic,strong) NSImage * icon;
@property (nonatomic) BOOL ready;

-(NSInteger)byteSize;
-(NSData *)formData;

@end


@interface RepliesIOScreenShotAttachment : RepliesIOAttachment
@property (nonatomic,strong) NSImage * image;
@property (nonatomic,strong) NSImage * composedImage;
@property (nonatomic,strong) NSData * annotationData;
@property (nonatomic,strong) NSData * formData;

+(instancetype)attachmentWithImage:(NSImage *)image;

-(NSString *)title;
-(void)setTitle:(NSString *)title;
@end
