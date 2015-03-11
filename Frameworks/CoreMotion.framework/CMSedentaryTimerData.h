/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying> {
    boolfDidWake;
    long long fAlarmType;
    double fFiredDate;
    double fStartDate;
}

@property(readonly) long long alarmType;
@property(readonly) bool didWake;
@property(readonly) NSDate * firedDate;
@property(readonly) NSDate * startDate;

+ (bool)supportsSecureCoding;

- (long long)alarmType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)didWake;
- (void)encodeWithCoder:(id)arg1;
- (id)firedDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 firedDate:(double)arg2 alarmType:(long long)arg3 didWake:(bool)arg4;
- (id)startDate;

@end