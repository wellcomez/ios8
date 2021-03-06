/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterFoundation/GKPlayer.h>

#import "GKSavedGameListener-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKEventEmitter<GKLocalPlayerListener>, GKInvite, NSDate, NSDictionary, NSInvocation, NSString, UIAlertView, UIViewController, UIViewController<GKAuthenticateViewController>;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>
{
    _Bool _authenticated;
    _Bool _authenticating;
    _Bool _authenticatingCurrentAccount;
    _Bool _didAuthenticate;
    _Bool _validatingAccount;
    _Bool _enteringForeground;
    _Bool _appUnrecognized;
    _Bool _newToGameCenter;
    id _authenticateHandler;
    GKInvite *_acceptedInvite;
    id _authenticationCompletionHandler;
    id _validateAccountCompletionHandler;
    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSString *_lastAccountNameAuthenticated;
    NSInvocation *_currentFriendRequestInvocation;
    unsigned long long _failedLogins;
    NSDictionary *_authenticateAlertDictionary;
    long long _environment;
    NSString *_lastAuthPlayerID;
    NSDate *_lastAuthDate;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    UIViewController *_rootViewController;
    UIViewController *_activeViewController;
    UIViewController<GKAuthenticateViewController> *_signInViewController;
}

+ (id)localPlayer;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) UIViewController<GKAuthenticateViewController> *signInViewController; // @synthesize signInViewController=_signInViewController;
@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) GKEventEmitter<GKLocalPlayerListener> *eventEmitter; // @synthesize eventEmitter=_eventEmitter;
@property(nonatomic, getter=isNewToGameCenter) _Bool newToGameCenter; // @synthesize newToGameCenter=_newToGameCenter;
@property(retain, nonatomic) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property(retain, nonatomic) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic, getter=isAppUnrecognized) _Bool appUnrecognized; // @synthesize appUnrecognized=_appUnrecognized;
@property(retain, nonatomic) NSDictionary *authenticateAlertDictionary; // @synthesize authenticateAlertDictionary=_authenticateAlertDictionary;
@property(nonatomic) unsigned long long failedLogins; // @synthesize failedLogins=_failedLogins;
@property(nonatomic) _Bool enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(nonatomic) _Bool validatingAccount; // @synthesize validatingAccount=_validatingAccount;
@property(nonatomic) _Bool didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property(retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // @synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation;
@property(retain, nonatomic) NSString *lastAccountNameAuthenticated; // @synthesize lastAccountNameAuthenticated=_lastAccountNameAuthenticated;
@property(nonatomic) _Bool authenticatingCurrentAccount; // @synthesize authenticatingCurrentAccount=_authenticatingCurrentAccount;
@property(retain, nonatomic) NSString *lastUsernameAttempted; // @synthesize lastUsernameAttempted=_lastUsernameAttempted;
@property(nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) UIAlertView *loginAlertView; // @synthesize loginAlertView=_loginAlertView;
@property(copy, nonatomic) id validateAccountCompletionHandler; // @synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler;
@property(copy, nonatomic) id authenticationCompletionHandler; // @synthesize authenticationCompletionHandler=_authenticationCompletionHandler;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(copy, nonatomic) id authenticateHandler; // @synthesize authenticateHandler=_authenticateHandler;
@property(nonatomic, getter=isAuthenticating) _Bool authenticating; // @synthesize authenticating=_authenticating;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id)arg2;
- (_Bool)hasEmailAddress:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)reset:(id)arg1;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(id)arg2;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id)arg8;
- (void)loadFriendRequests:(id)arg1;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)showSettings;
@property(readonly, nonatomic) _Bool canChangePhoto; // @dynamic canChangePhoto;
- (void)loadGameRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id)arg1;
- (id)friends;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setStatus:(id)arg1;
- (void)setupMultiplayerNotifications;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)setupForCloudSavedGames;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(readonly, nonatomic) _Bool allowNearbyMultiplayer; // @dynamic allowNearbyMultiplayer;
@property(readonly, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(readonly, nonatomic, getter=isFindable) _Bool findable; // @dynamic findable;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly, nonatomic) NSString *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic, getter=isPurpleBuddyAccount) _Bool purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(readonly, nonatomic, getter=isUnderage) _Bool underage; // @dynamic underage;

@end

