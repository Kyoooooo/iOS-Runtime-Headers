/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, NSData, NSDictionary, NSString;

@interface GKInvite : NSObject {
    BOOL _cancelled;
    BOOL _hosted;
    NSDictionary *_inviteDictionary;
    NSString *_inviteID;
    NSString *_inviter;
    GKPlayer *_invitingPlayer;
    NSString *_message;
    NSData *_sessionToken;
}

@property(getter=isCancelled) BOOL cancelled;
@property(getter=isHosted) BOOL hosted;
@property(retain) NSDictionary * inviteDictionary;
@property(retain) NSString * inviteID;
@property(retain) NSString * inviter;
@property(retain) GKPlayer * invitingPlayer;
@property(retain) NSString * message;
@property(retain) NSData * sessionToken;

+ (id)inviteWithDictionary:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)inviteDictionary;
- (id)inviteID;
- (id)inviter;
- (id)invitingPlayer;
- (BOOL)isCancelled;
- (BOOL)isHosted;
- (id)message;
- (id)sessionToken;
- (void)setCancelled:(BOOL)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInviteDictionary:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setInviter:(id)arg1;
- (void)setInvitingPlayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end