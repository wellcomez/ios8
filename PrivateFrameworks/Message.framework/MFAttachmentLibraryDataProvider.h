/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFAttachmentDataProvider-Protocol.h"

@class MFMessageLibrary;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProvider>
{
    MFMessageLibrary *_messageLibrary;
}

@property(retain, nonatomic) MFMessageLibrary *messageLibrary; // @synthesize messageLibrary=_messageLibrary;
- (id)messageForAttachment:(id)arg1;
- (_Bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

@end

