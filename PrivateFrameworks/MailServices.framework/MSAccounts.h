/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
{
}

+ (_Bool)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(_Bool)arg3 error:(id *)arg4;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(id)arg3;
+ (_Bool)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id *)arg2;
+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (_Bool)canSendMailSourceAccountManagement:(int)arg1;
+ (_Bool)canSendMail;
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(_Bool)arg4 completionBlock:(id)arg5;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(_Bool)arg2 completionBlock:(id)arg3;
+ (void)accountValuesForKeys:(id)arg1 completionBlock:(id)arg2;
+ (_Bool)hasActiveAccounts;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;
- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(id)arg4;

@end
