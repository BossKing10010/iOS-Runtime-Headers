/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUIrisAnalysisSettings : PUSettings {
    double _timeMultiplier;
}

@property (nonatomic) double timeMultiplier;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 moduleController:(id)arg3;
- (void)_startAnalysisWithModuleController:(id)arg1;
- (void)setDefaultValues;
- (void)setTimeMultiplier:(double)arg1;
- (double)timeMultiplier;

@end
