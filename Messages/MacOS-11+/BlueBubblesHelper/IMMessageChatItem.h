//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMTranscriptChatItem.h"

#import "IMMessageChatItem-Protocol.h"

@class IMHandle, IMMessage, NSDate, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
}

@property(readonly, nonatomic) IMHandle *sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) IMMessage *message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long hash;
@property(readonly) Class superclass;

-(BOOL)canReply API_AVAILABLE(macos(10.16), ios(14.0), watchos(7.0));

@end
