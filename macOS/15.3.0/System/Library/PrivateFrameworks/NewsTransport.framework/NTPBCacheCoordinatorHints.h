@class NSString, NSMutableArray;

@interface NTPBCacheCoordinatorHints : PBCodable <FCKeyValueStoreCoding, NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableArray *cacheHints;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;
+ (Class)cacheHintsType;

- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)cacheHintsCount;
- (void)clearCacheHints;
- (void)addCacheHints:(id)a0;
- (id)cacheHintsAtIndex:(unsigned long long)a0;

@end
