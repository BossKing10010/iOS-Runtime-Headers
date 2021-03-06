/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration> {
    NSArray *_uuids;
}

@property (nonatomic, readonly) NSString *UUIDPathString;
@property (nonatomic, readonly) NSUUID *lastUUID;
@property (nonatomic, readonly) NSArray *uuids;

+ (id)lastUUIDFromUUIDPathString:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)UUIDPathString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithMessage:(const struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastUUID;
- (void)saveToMessage:(struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)uuids;

@end
