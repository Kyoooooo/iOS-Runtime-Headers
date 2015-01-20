/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKRecurrenceChooserControllerDelegate>, NSDate;

@interface EKRecurrenceChooserController : NSObject {
    NSDate *_date;
    <EKRecurrenceChooserControllerDelegate> *_delegate;
}

@property(copy) NSDate * date;
@property <EKRecurrenceChooserControllerDelegate> * delegate;
@property(readonly) int frequency;

+ (int)dayFromNumber:(long long)arg1;

- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;
- (id)date;
- (id)delegate;
- (bool)drawBackgroundForRow:(long long)arg1;
- (int)frequency;
- (double)heightForRow:(long long)arg1;
- (id)initWithDate:(id)arg1;
- (void)notifyDelegate;
- (long long)numberOfRows;
- (void)rowTapped:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startDateComponents:(unsigned long long)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end