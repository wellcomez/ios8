/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    struct {
        unsigned int _isEmpty:1;
        unsigned int _hasSingleRange:1;
        unsigned int _cacheValid:1;
        unsigned int _reservedArrayBinderController:29;
    } _indexSetFlags;
    union {
        struct {
            struct _NSRange _range;
        } _singleRange;
        struct {
            void *_data;
            void *_reserved;
        } _multipleRanges;
    } _internal;
}

+ (_Bool)supportsSecureCoding;
+ (id)indexSetWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (id)indexSetWithIndexesInRange:(struct _NSRange)arg1;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSet;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (id)indexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (id)indexesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)indexesPassingTest:(id)arg1;
- (unsigned long long)indexInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (unsigned long long)indexPassingTest:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (id)description;
- (id)_numberEnumerator;
- (_Bool)intersectsIndexesInRange:(struct _NSRange)arg1;
- (_Bool)containsIndexes:(id)arg1;
- (_Bool)containsIndexesInRange:(struct _NSRange)arg1;
- (_Bool)containsIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange)arg1;
- (unsigned long long)__getContainmentVector:(out _Bool *)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)getIndexes:(unsigned long long *)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _NSRange *)arg3;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexLessThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(_Bool)arg2 following:(_Bool)arg3;
@property(readonly) unsigned long long lastIndex;
@property(readonly) unsigned long long firstIndex;
@property(readonly) unsigned long long count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToIndexSet:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithIndexes:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)initWithIndexSet:(id)arg1;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)init;
- (id)_init;
- (id)replacementObjectForPortCoder:(id)arg1;
- (unsigned long long)_indexAtIndex:(unsigned long long)arg1;

@end
