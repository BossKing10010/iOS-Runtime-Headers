/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPurchase, NSError, NSDictionary, SSItemOfferDeviceError;

@interface SSPurchaseValidationResponse : NSObject  {
    SSItemOfferDeviceError *_deviceError;
    NSError *_genericError;
    SSPurchase *_failedPurchase;
    NSDictionary *_mismatchedSoftwareCapabilities;
    BOOL _valid;
}

@property(getter=isValid,readonly) BOOL valid;
@property(readonly) NSDictionary * mismatchedSoftwareCapabilities;
@property(readonly) NSError * genericError;
@property(readonly) SSPurchase * failedPurchase;
@property(readonly) SSItemOfferDeviceError * deviceError;


- (BOOL)isValid;
- (void)dealloc;
- (void)_setValid:(BOOL)arg1;
- (void)_setDeviceError:(id)arg1;
- (void)_setFailedPurchase:(id)arg1;
- (void)_setGenericError:(id)arg1;
- (void)_setMismatchedSoftwareCapabilities:(id)arg1;
- (id)genericError;
- (id)deviceError;
- (id)mismatchedSoftwareCapabilities;
- (id)failedPurchase;

@end