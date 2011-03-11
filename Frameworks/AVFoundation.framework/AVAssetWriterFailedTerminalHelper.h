/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper  {
    NSError *_terminalError;
}


- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)finishWriting;
- (id)error;
- (int)status;

@end