@class NSString, NSData;

@interface NTPBAsset : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    struct { unsigned char error : 1; unsigned char size : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasWrappingKeyID;
@property (retain, nonatomic) NSData *wrappingKeyID;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned int size;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
