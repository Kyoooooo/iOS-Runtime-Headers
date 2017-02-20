/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAppLibraryInterface : IKJSObject <WLKUIAppLibraryInterface> {
    NSCache * _appCache;
}

@property (nonatomic, readonly) NSArray *installed;
@property (nonatomic, readonly) NSArray *subscribed;
@property (nonatomic, readonly) NSArray *test;

- (void).cxx_destruct;
- (id)_appDictionariesForBundleIDs:(id)arg1;
- (id)_appDictionaryForBundleID:(id)arg1;
- (void)_openAppWithBundleID:(id)arg1 retryCount:(int)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (void)installAppForChannel:(id)arg1 :(id)arg2;
- (void)installAppForChannel:(id)arg1 :(id)arg2 :(id)arg3;
- (id)installed;
- (void)openAppWithBundleID:(id)arg1;
- (id)subscribed;
- (id)test;

@end