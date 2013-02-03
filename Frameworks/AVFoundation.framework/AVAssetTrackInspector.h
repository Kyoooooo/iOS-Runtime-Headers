/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetTrackInspector : NSObject {
}

@property(readonly) NSArray *availableMetadataFormats;
@property(readonly) NSArray *commonMetadata;
@property(readonly) NSString *extendedLanguageTag;
@property(readonly) NSArray *formatDescriptions;
@property(readonly) NSString *languageCode;
@property(readonly) NSString *mediaType;
@property(copy,readonly) NSArray *segments;
@property(getter=isEnabled,readonly) BOOL enabled;
@property(readonly) float estimatedDataRate;
@property(getter=isExcludedFromAutoselectionInTrackGroup,readonly) BOOL excludedFromAutoselectionInTrackGroup;
@property(readonly) CGSize naturalSize;
@property(readonly) NSInteger naturalTimeScale;
@property(readonly) float nominalFrameRate;
@property(readonly) CGAffineTransform preferredTransform;
@property(readonly) float preferredVolume;
@property(getter=isSelfContained,readonly) BOOL selfContained;
@property(readonly) ? timeRange;
@property(readonly) long long totalSampleDataLength;
@property(readonly) NSInteger trackID;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(NSInteger)arg2 trackIndex:(long)arg3;

- (id)availableMetadataFormats;
- (id)commonMetadata;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (BOOL)isEnabled;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isSelfContained;
- (id)languageCode;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (NSInteger)naturalTimeScale;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (id)segments;
- (struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (NSInteger)trackID;

@end