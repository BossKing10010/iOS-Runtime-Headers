/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTXConnection : NSObject <VTXService> {
    NSMutableSet *_activationAssertions;
    BOOL _isPhraseSpotterBypassed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setPhraseSpotterBypassing:(BOOL)arg1;
- (oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (oneway void)getTestResponse:(id /* block */)arg1;
- (void)handleDisconnect;
- (id)init;
- (oneway void)resetAssertions;
- (oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3;

@end
