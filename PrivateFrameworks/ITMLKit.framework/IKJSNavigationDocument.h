/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSNavigationDocument-Protocol.h>

@class NSArray;

@interface IKJSNavigationDocument : IKJSObject <IKJSNavigationDocument>
{
    id <IKAppNavigationController> _navigationControllerDelegate;
}

@property(readonly, nonatomic) __weak id <IKAppNavigationController> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
- (void).cxx_destruct;
- (void)removeDocument:(id)arg1;
- (void)popToRootDocument;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)replaceDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)insertBeforeDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)pushDocument:(id)arg1:(id)arg2;
@property(readonly, retain, nonatomic) NSArray *documents;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2;

@end

