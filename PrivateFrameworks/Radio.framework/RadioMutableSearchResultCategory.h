/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioSearchResultCategory.h>

@class NSArray, NSDictionary, NSString;

@interface RadioMutableSearchResultCategory : RadioSearchResultCategory
{
}

@property(copy, nonatomic) NSArray *stationResults;
@property(copy, nonatomic) NSDictionary *responseDictionary;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) _Bool hasMoreResults;
@property(nonatomic) long long categoryType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
