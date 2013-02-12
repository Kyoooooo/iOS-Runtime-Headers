/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKBackgroundView, GKPhotoPicker, NSData, NSString, NSURLRequest, UIAlertView, UIWebView;

@interface GKServerWebViewController : GKViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _addedSheetFrame;
    UIAlertView *_alert;
    NSString *_authToken;
    } _backgroundInsets;
    GKBackgroundView *_backgroundView;
    NSString *_cancelCallback;
    id _completionHandler;
    BOOL _dismissOnAuthenticate;
    NSString *_leftCallback;
    NSString *_okCallback;
    GKPhotoPicker *_photoPicker;
    NSString *_playerID;
    NSURLRequest *_previousRequest;
    NSData *_pushToken;
    NSString *_rightCallback;
    int _status;
    UIWebView *_webView;
}

@property BOOL addedSheetFrame;
@property(retain) UIAlertView * alert;
@property(retain) NSString * authToken;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property(retain) GKBackgroundView * backgroundView;
@property(retain) NSString * cancelCallback;
@property(copy) id completionHandler;
@property BOOL dismissOnAuthenticate;
@property(retain) NSString * leftCallback;
@property(retain) NSString * okCallback;
@property(retain) GKPhotoPicker * photoPicker;
@property(retain) NSString * playerID;
@property(retain) NSURLRequest * previousRequest;
@property(retain) NSData * pushToken;
@property(retain) NSString * rightCallback;
@property int status;
@property(retain) UIWebView * webView;

- (BOOL)addedSheetFrame;
- (id)alert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)authToken;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (id)backgroundView;
- (void)cancelAlertWithoutDelegateCallback;
- (id)cancelCallback;
- (void)changePhoto;
- (id)completionHandler;
- (void)dealloc;
- (id)decodeDashEncodedString:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)dismissOnAuthenticate;
- (void)finish;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)leftCallback;
- (void)leftNavButtonPressed;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (id)okCallback;
- (void)parseAlertURLString:(id)arg1;
- (void)parseNavBarURLString:(id)arg1;
- (id)photoPicker;
- (id)playerID;
- (id)previousRequest;
- (void)processGameKitURLComponents:(id)arg1;
- (id)pushToken;
- (id)rightCallback;
- (void)rightNavButtonPressed;
- (void)setAddedSheetFrame:(BOOL)arg1;
- (void)setAlert:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCancelCallback:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDismissOnAuthenticate:(BOOL)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)setLeftCallback:(id)arg1;
- (void)setOkCallback:(id)arg1;
- (void)setPhotoPicker:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPreviousRequest:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRightCallback:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setWebView:(id)arg1;
- (void)showMessageForError:(id)arg1;
- (int)status;
- (void)uploadContacts;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)webView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end