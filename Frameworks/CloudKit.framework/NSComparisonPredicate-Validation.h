/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSComparisonPredicate.h"

@interface NSComparisonPredicate (Validation)
- (void)validate;
- (_Bool)validateBasicOperatorPredicate;
- (_Bool)validateFullTextSearchPredicate;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (_Bool)validateBetweenPredicate;
- (_Bool)validateBeginsWithPredicate;
- (_Bool)validateContainsAllInPredicate;
- (_Bool)validateContainsAnyPredicate;
- (_Bool)validateInPredicate;
- (_Bool)validateContainsPredicate;
- (_Bool)validateNearPredicate;
@end
