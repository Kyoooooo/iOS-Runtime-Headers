/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSArray, NSMutableArray;

@interface SWIntervalSnapshotObserver : NSObject <SWRunWorkoutObserver> {
    float _calorieInterval;
    float _distanceIntervalInMiles;
    unsigned int _previousCalorieSnapshotIndex;
    unsigned int _previousDistanceSnapshotIndex;
    unsigned int _previousTimeSnapshotIndex;
    NSMutableArray *_snapshots;
    unsigned int _timeIntervalInSeconds;
}

@property(readonly) NSArray * snapshots;

- (id)_init;
- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (void)dealloc;
- (id)initWithCalorieInterval:(float)arg1;
- (id)initWithDistanceIntervalInMiles:(float)arg1;
- (id)initWithTimeIntervalInSeconds:(unsigned int)arg1;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (id)snapshots;

@end