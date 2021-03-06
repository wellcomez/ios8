/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

// Not exported
@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate
{
    NSArray *_propertiesToUpdate;
    NSArray *_valuesToUpdateTo;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3;
- (id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3;
- (_Bool)isRelationship:(id)arg1 compatibleWith:(id)arg2;
- (id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3;
- (_Bool)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2;
- (_Bool)isUpdateColumnsScoped;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3;

@end

