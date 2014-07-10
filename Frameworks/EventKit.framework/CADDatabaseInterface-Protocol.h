/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol CADDatabaseInterface
- (void)CADDatabaseResetWithReply:(id)arg1;
- (void)CADDatabaseRollbackWithReply:(id)arg1;
- (void)CADDatabaseCommitWithReply:(id)arg1;
- (void)CADDatabaseSaveWithReply:(id)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(_Bool)arg1 reply:(id)arg2;
- (void)CADDatabaseImportICSData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned long long)arg3 reply:(id)arg4;
- (void)CADDatabaseSetSourceAccountManagement:(int)arg1 reply:(id)arg2;
- (void)CADDatabaseGetNextAssignableColorWithReply:(id)arg1;
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(id)arg2;
- (void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(id)arg2;
- (void)CADDatabaseGetSequenceNumber:(id)arg1;
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(id)arg2;
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(id)arg2;
- (void)CADDatabaseRegisterForDetailedChangeTracking:(id)arg1;
- (void)CADDatabaseGetUUID:(id)arg1;
- (void)CADDatabaseSetPath:(id)arg1 andInitOptions:(int)arg2 reply:(id)arg3;
@end
