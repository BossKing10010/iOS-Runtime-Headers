/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer  {
    float _initialTouchDistance;
    float _initialTouchScale;
    double _lastTouchTime;
    float _velocity;
    float _previousVelocity;
    float _scaleThreshold;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    UITouch *_touches[2];
    float _hysteresis;
    unsigned int _endsOnSingleTouch : 1;
}

@property float scale;
@property(readonly) float velocity;
@property(readonly) struct CGPoint { float x; float y; } anchorPoint;
@property(getter=_hysteresis,setter=_setHysteresis:) float hysteresis;
@property float scaleThreshold;

+ (void)addPinchGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;

- (void)_setEndsOnSingleTouch:(BOOL)arg1;
- (float)scaleThreshold;
- (void)setScaleThreshold:(float)arg1;
- (BOOL)_endsOnSingleTouch;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (float)velocity;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_setHysteresis:(float)arg1;
- (void)setScale:(float)arg1;
- (float)_hysteresis;
- (float)scale;

@end