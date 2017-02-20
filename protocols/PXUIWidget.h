/* Generated by RuntimeBrowser.
 */

@protocol PXUIWidget <PXWidget>

@optional

- (void)commitPreviewViewController:(UIViewController *)arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1 forCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)controllerTraitCollectionDidChangeFrom:(UITraitCollection *)arg1 to:(UITraitCollection *)arg2;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(BOOL)arg2;
- (void)environmentDidUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (PXOneUpPresentation *)oneUpPresentation;
- (void)preloadWithSourceRegionOfInterest:(PXRegionOfInterest *)arg1 forContext:(PXPhotosDetailsContext *)arg2;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { float x1; float x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (PXRegionOfInterest *)regionOfInterestForContext:(PXPhotosDetailsContext *)arg1;
- (void)setOneUpPresentation:(PXOneUpPresentation *)arg1;
- (PXZoomAnimationCoordinator *)zoomAnimationCoordinatorForContext:(PXPhotosDetailsContext *)arg1;

@end