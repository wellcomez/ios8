/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@interface UIViewController (MPUAdditions)
+ (id)_MPU_viewControllerForIdentifier:(id)arg1 forSearch:(_Bool)arg2 withQuery:(id)arg3 isDefaultQuery:(_Bool)arg4;
+ (Class)_MPU_viewControllerClassForIdentifier:(id)arg1;
+ (_Bool)_MPU_hasCreationInformationForIdentifier:(id)arg1;
+ (id)_MPU_defaultQueryForIdentifier:(id)arg1;
+ (void)_MPU_configureViewController:(id)arg1 forIdentifier:(id)arg2;
+ (id)MPU_searchViewControllersForIdentifiers:(id)arg1;
+ (id)MPU_searchViewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)MPU_searchViewControllerForIdentifier:(id)arg1;
+ (id)MPU_viewControllersForIdentifiers:(id)arg1;
+ (id)MPU_viewControllerForIdentifier:(id)arg1 withQuery:(id)arg2;
+ (id)MPU_viewControllerForIdentifier:(id)arg1;
+ (void)MPU_registerIdentifier:(id)arg1 withAttributes:(id)arg2 defaultQueryCreationHandler:(id)arg3;
+ (id)MPU_defaultDataSourceForViewControllerWithIdentifier:(id)arg1;
@end
