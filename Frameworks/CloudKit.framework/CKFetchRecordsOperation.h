/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation
{
    _Bool _shouldFetchAssetContent;
    _Bool _isFetchCurrentUserOperation;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    id _perRecordProgressBlock;
    id _perRecordCompletionBlock;
    id _fetchRecordsCompletionBlock;
    NSMutableDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSMutableDictionary *_recordIDsToRecords;
    NSMutableDictionary *_recordErrors;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_recordIDsToVersionETags;
}

+ (id)fetchCurrentUserRecordOperation;
@property(retain, nonatomic) NSDictionary *recordIDsToVersionETags; // @synthesize recordIDsToVersionETags=_recordIDsToVersionETags;
@property(nonatomic) _Bool isFetchCurrentUserOperation; // @synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation;
@property(copy, nonatomic) NSDictionary *desiredPackageFileIndices; // @synthesize desiredPackageFileIndices=_desiredPackageFileIndices;
@property(retain, nonatomic) NSMutableDictionary *recordErrors; // @synthesize recordErrors=_recordErrors;
@property(retain, nonatomic) NSMutableDictionary *recordIDsToRecords; // @synthesize recordIDsToRecords=_recordIDsToRecords;
@property(retain, nonatomic) NSMutableDictionary *signaturesOfAssetsByRecordIDAndKey; // @synthesize signaturesOfAssetsByRecordIDAndKey=_signaturesOfAssetsByRecordIDAndKey;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(copy, nonatomic) id fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property(copy, nonatomic) id perRecordCompletionBlock; // @synthesize perRecordCompletionBlock=_perRecordCompletionBlock;
@property(copy, nonatomic) id perRecordProgressBlock; // @synthesize perRecordProgressBlock=_perRecordProgressBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (id)init;

@end

