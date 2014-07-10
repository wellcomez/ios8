/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSURectList : NSObject
{
    struct vector<CGRect, std::__1::allocator<CGRect>> mRectList;
}

+ (id)rectListWithDifference:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)rectAtIndex:(unsigned long long)arg1;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRect:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithRectList:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end
