/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraStreamViewController : UIViewController <HFHomeObserver, HFItemManagerDelegate, HUPresentationDelegate, HUPresentationDelegateHost> {
    BOOL  _barsHidden;
    BOOL  _beingPreviewed;
    HFCameraAudioManager * _cameraAudioManager;
    HUCameraView * _cameraView;
    <HUCameraStreamViewControllerDelegate> * _delegate;
    HFItemManager * _itemManager;
    UIBarButtonItem * _microphoneBarButtonItem;
    HUCameraMicrophoneButton * _microphoneButton;
    <HUPresentationDelegate> * _presentationDelegate;
    NSArray * _viewConstraints;
    BOOL  _viewFullyVisible;
    UIBarButtonItem * _volumeBarButtonItem;
    MPVolumeSlider * _volumeSlider;
}

@property (getter=areBarsHidden, nonatomic) BOOL barsHidden;
@property (getter=isBeingPreviewed, nonatomic) BOOL beingPreviewed;
@property (nonatomic, retain) HFCameraAudioManager *cameraAudioManager;
@property (nonatomic, readonly) UIView *cameraOverlaySnapshot;
@property (nonatomic, retain) HUCameraView *cameraView;
@property (nonatomic, readonly) UIView *cameraViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCameraStreamViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItemManager *itemManager;
@property (nonatomic, retain) UIBarButtonItem *microphoneBarButtonItem;
@property (nonatomic, retain) HUCameraMicrophoneButton *microphoneButton;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewConstraints;
@property (getter=isViewFullyVisible, nonatomic) BOOL viewFullyVisible;
@property (nonatomic, retain) UIBarButtonItem *volumeBarButtonItem;
@property (nonatomic, retain) MPVolumeSlider *volumeSlider;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_cameraItem;
- (id)_cameraManager;
- (id)_createBarBackgroundView;
- (void)_createCameraAudioManagerIfNecessary;
- (void)_detailsButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_handleBarHideTapGesture:(id)arg1;
- (BOOL)_isStreaming;
- (void)_microphoneButtonPressed:(id)arg1;
- (id)_preferredCameraSource;
- (void)_setupNavigationController;
- (void)_updateCameraViewsIncludingError:(BOOL)arg1;
- (void)_updateIncomingAudioStreamSetting;
- (void)_updateNavigationItemTitle;
- (void)_updatePreferredContentSize;
- (void)_updateToolbarButtonFramesForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateToolbarButtons;
- (BOOL)areBarsHidden;
- (id)cameraAudioManager;
- (id)cameraOverlaySnapshot;
- (id)cameraView;
- (id)cameraViewSnapshot;
- (id)delegate;
- (void)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (id)initWithCameraItem:(id)arg1 delegate:(id)arg2;
- (BOOL)isBeingPreviewed;
- (BOOL)isViewFullyVisible;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)microphoneBarButtonItem;
- (id)microphoneButton;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (id)presentationDelegate;
- (void)setBarsHidden:(BOOL)arg1;
- (void)setBeingPreviewed:(BOOL)arg1;
- (void)setCameraAudioManager:(id)arg1;
- (void)setCameraView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setMicrophoneBarButtonItem:(id)arg1;
- (void)setMicrophoneButton:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setViewConstraints:(id)arg1;
- (void)setViewFullyVisible:(BOOL)arg1;
- (void)setVolumeBarButtonItem:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateViewConstraints;
- (id)viewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)volumeBarButtonItem;
- (id)volumeSlider;

@end
