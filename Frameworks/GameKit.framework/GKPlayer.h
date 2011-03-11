/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKGame, NSArray, NSString, NSDictionary, NSMutableArray, NSNumber;

@interface GKPlayer : NSObject  {
    NSString *_playerID;
    NSString *_alias;
    BOOL _isFriend;
    double _lastSeenTime;
    NSString *_status;
    int _rating;
    NSDictionary *_avatarURLs;
    NSDictionary *_avatarDescription;
    NSMutableArray *_achievementsAchievedList;
    NSArray *_achievementListFromServer;
    double _lastPlayedTime;
    int _inviteStatus;
    NSString *_firstName;
    NSString *_lastName;
    BOOL _hasDetailInfo;
    unsigned int _numberOfFriends;
    unsigned int _numberOfGamesPlayed;
    unsigned int _numberOfAchievements;
    NSDictionary *_lastPlayedGameDescriptor;
    NSNumber *_numberAchievedForCurrentGame;
    NSString *_friendRequestID;
    NSMutableArray *_emails;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _rateCompletionHandler;

    NSMutableArray *_cachedAvatars;
}

@property(retain) NSDictionary * avatarURLs;
@property(retain) NSDictionary * avatarDescription;
@property(retain) NSString * alias;
@property BOOL isFriend;
@property double lastSeenTime;
@property(readonly) NSString * email;
@property(retain) NSArray * emails;
@property double lastPlayedTime;
@property(retain) NSMutableArray * achievementsAchievedList;
@property(retain) NSArray * achievementListFromServer;
@property(readonly) GKGame * lastPlayedGame;
@property(retain,readonly) NSString * cacheKey;
@property int inviteStatus;
@property BOOL hasDetailInfo;
@property unsigned int numberOfFriends;
@property unsigned int numberOfGamesPlayed;
@property unsigned int numberOfAchievements;
@property(retain) NSNumber * numberAchievedForCurrentGame;
@property(readonly) int rating;
@property(retain) NSMutableArray * cachedAvatars;
@property(copy) id rateCompletionHandler;
@property(retain) NSMutableArray * emails;
@property(retain) NSString * friendRequestID;
@property(retain) NSNumber * numberAchievedForCurrentGame;
@property(retain) NSDictionary * lastPlayedGameDescriptor;
@property unsigned int numberOfAchievements;
@property unsigned int numberOfGamesPlayed;
@property unsigned int numberOfFriends;
@property BOOL hasDetailInfo;
@property(retain) NSString * lastName;
@property(retain) NSString * firstName;
@property int inviteStatus;
@property double lastPlayedTime;
@property(retain) NSArray * achievementListFromServer;
@property(retain) NSMutableArray * achievementsAchievedList;
@property(retain) NSDictionary * avatarDescription;
@property(retain) NSDictionary * avatarURLs;
@property int rating;
@property(copy) NSString * status;
@property double lastSeenTime;
@property BOOL isFriend;
@property(copy) NSString * alias;
@property(retain) NSString * playerID;

+ (void)updatePlayersWithFriendIDs:(id)arg1;
+ (id)playerWithUniqueID:(id)arg1;
+ (void)loadPlayersForIdentifiers:(id)arg1 withDetails:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (id)playerWithDictionary:(id)arg1;
+ (id)anonymousPlayer;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)playerWithAlias:(id)arg1 playerID:(id)arg2 friendRequestID:(id)arg3;
+ (void)clearCache;

- (id)quotedAlias;
- (id)quotedAliasWithFont:(id)arg1 foreColor:(id)arg2 shadowColor:(id)arg3;
- (id)attributedIdentifiableName:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1;
- (id)sortName;
- (id)displayNameWithIdentifiableName:(BOOL)arg1;
- (id)identifiableNameIncludingSurname:(BOOL)arg1;
- (void)setNumberAchievedForCurrentGame:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (id)firstName;
- (id)attributedDisplayName;
- (void)setAlias:(id)arg1;
- (void)setIsFriend:(BOOL)arg1;
- (id)lastName;
- (id)alias;
- (void)postChangeNotification;
- (void)setFriendRequestID:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setStatus:(id)arg1;
- (BOOL)populateWithDictionary:(id)arg1;
- (void)setNumberOfAchievements:(unsigned int)arg1;
- (void)addEmail:(id)arg1 verified:(BOOL)arg2;
- (id)email;
- (id)cachedAvatars;
- (id)initWithPlayerID:(id)arg1;
- (void)setCachedAvatars:(id)arg1;
- (id)rateCompletionHandler;
- (void)setRateCompletionHandler:(id)arg1;
- (id)friendRequestID;
- (id)lastPlayedGameDescriptor;
- (void)setLastPlayedGameDescriptor:(id)arg1;
- (unsigned int)numberOfAchievements;
- (void)setNumberOfGamesPlayed:(unsigned int)arg1;
- (unsigned int)numberOfFriends;
- (void)setNumberOfFriends:(unsigned int)arg1;
- (void)setHasDetailInfo:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setInviteStatus:(int)arg1;
- (void)setLastPlayedTime:(double)arg1;
- (void)setAchievementListFromServer:(id)arg1;
- (void)setAchievementsAchievedList:(id)arg1;
- (void)setAvatarDescription:(id)arg1;
- (void)setAvatarURLs:(id)arg1;
- (void)setLastSeenTime:(double)arg1;
- (BOOL)isFriend;
- (id)numberAchievedForCurrentGame;
- (unsigned int)numberOfGamesPlayed;
- (BOOL)hasDetailInfo;
- (int)inviteStatus;
- (id)achievementListFromServer;
- (id)achievementsAchievedList;
- (double)lastPlayedTime;
- (id)emails;
- (double)lastSeenTime;
- (id)avatarDescription;
- (id)avatarURLs;
- (void)_postChangeNotification;
- (void)updateNamesFromAddressBook;
- (id)lastPlayedGame;
- (void)acceptFriendRequestForHandle:(id)arg1 withCompletionHandler:(id)arg2;
- (void)declineFriendRequest:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)loadGamesPlayed:(id)arg1;
- (void)loadGamePlayedRecord:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadGamesPlayedScoreCard:(id)arg1 withCompletionHandler:(id)arg2;
- (void)reloadDetails;
- (void)loadInfoDetailed:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)clearDetails;
- (void)submitRating:(int)arg1 withCompletionHandler:(id)arg2;
- (id)avatarURLForSize:(int)arg1;
- (void)sendFriendRequestWithMessage:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_loadAvatarImageForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (void)loadAvatarImageForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (void)loadAvatarForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (void)invalidateCachedProfileWithCompletionHandler:(id)arg1;
- (id)playerID;
- (id)displayName;
- (id)cacheKey;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)setRating:(int)arg1;
- (id)status;
- (int)rating;

@end