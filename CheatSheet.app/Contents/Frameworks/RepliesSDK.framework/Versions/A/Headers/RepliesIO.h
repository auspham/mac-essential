//
//  RepliesSDK.h
//  RepliesSDK
//
//  Created by Stefan Fuerst on 23.06.16.
//  Copyright (c) 2016 Replies. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RepliesIOMessage.h"
#import "RepliesIOAttachment.h"
#import "RepliesIOConfirmationAlert.h"


extern NSString *const RepliesIOSubjectQuestion;
extern NSString *const RepliesIOSubjectGeneral;
extern NSString *const RepliesIOSubjectProblem;
extern NSString *const RepliesIOSubjectFeatureRequest;
extern NSString *const RepliesIOSubjectTestimonial;
extern NSString *const RepliesIOSubjectOther;

@protocol RepliesIODelegate;

@interface RepliesIO : NSObject

+(RepliesIO *)sharedReplies;
@property (nonatomic, weak) id <RepliesIODelegate> delegate;
@property (nonatomic,strong) NSString * productName;
@property (nonatomic,strong) NSString * formIdentifier;
@property (nonatomic,strong) NSArray * subjectTypes;
@property (nonatomic,strong) NSArray * supportedLanguages;
@property (nonatomic,strong) NSDictionary * metaData;
@property (nonatomic,strong) NSMenu * menu;
@property (nonatomic,strong) NSString * APIHost;
@property (nonatomic,strong) NSString * customWindowTitle;
@property (nonatomic,strong) NSURL * customFormEndPointURL;


@property (nonatomic) BOOL hideBranding;

-(void)presentWindow:(id)sender;
-(void)closeWindow:(id)sender;
-(void)addAttachment:(RepliesIOAttachment *)attachment;
-(void)editAttachment:(RepliesIOScreenShotAttachment *)attachment completionHandler:(void (^)(RepliesIOScreenShotAttachment *))completionHandler;
-(void)takeScreenRecordingWithCompletionHandler:(void (^)(RepliesIOAttachment *aAttachment))completionHandler;
@end


@protocol RepliesIODelegate

@optional
-(void)repliesWillPresentWindow:(RepliesIO *)replies;
-(void)repliesDidPresentWindow:(RepliesIO *)replies;
-(void)replies:(RepliesIO *)replies willSendMessage:(RepliesIOMessage *)message;
-(void)replies:(RepliesIO *)replies didSendMessage:(RepliesIOMessage *)message;
-(void)replies:(RepliesIO *)replies userDidVoteForSuggestion:(NSDictionary *)suggestion;

@end