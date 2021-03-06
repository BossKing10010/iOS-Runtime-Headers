/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    struct { 
        unsigned int shieldEnumValue : 1; 
    } _has;
    NSString *_shieldColor;
    unsigned int _shieldEnumValue;
    NSString *_shieldText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasShieldColor;
@property (nonatomic) BOOL hasShieldEnumValue;
@property (nonatomic, readonly) BOOL hasShieldText;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *shieldColor;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic) unsigned int shieldEnumValue;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShieldColor;
- (BOOL)hasShieldEnumValue;
- (BOOL)hasShieldText;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasShieldEnumValue:(BOOL)arg1;
- (void)setShieldColor:(id)arg1;
- (void)setShieldEnumValue:(unsigned int)arg1;
- (void)setShieldText:(id)arg1;
- (id)shieldColor;
- (id)shieldColorString;
- (unsigned int)shieldEnumValue;
- (id)shieldText;
- (long long)shieldType;
- (void)writeTo:(id)arg1;

@end
