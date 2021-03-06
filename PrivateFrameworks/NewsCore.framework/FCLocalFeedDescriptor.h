/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCLocalFeedDescriptor : FCFeedDescriptor {
    <FCChannelProviding> * _channel;
    <FCFeedTheming> * _feedTheme;
    NSArray * _paths;
}

@property (nonatomic, retain) <FCChannelProviding> *channel;
@property (nonatomic, retain) <FCFeedTheming> *feedTheme;
@property (nonatomic, readonly) NSArray *paths;

- (void).cxx_destruct;
- (id)channel;
- (id)feedTheme;
- (int)feedType;
- (id)fetchOperationForHeadlinesWithIDs:(id)arg1;
- (id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4;
- (BOOL)isSubscribable;
- (BOOL)isSubscribedTo;
- (id)name;
- (id)paths;
- (void)setChannel:(id)arg1;
- (void)setFeedTheme:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;
- (id)theme;

@end
