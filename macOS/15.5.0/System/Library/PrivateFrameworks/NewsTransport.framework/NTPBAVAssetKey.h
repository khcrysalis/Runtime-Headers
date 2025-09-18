@class NSString, NTPBDate, NSData, NSDate, FCContentArchive, FCContentManifest;

@interface NTPBAVAssetKey : PBCodable <FCKeyValueStoreCoding, FCAVAssetKeyType, NSCopying>

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentManifest *contentManifest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSData *keyData;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) NTPBDate *createdAt;
@property (readonly, nonatomic) BOOL hasExpiresAt;
@property (retain, nonatomic) NTPBDate *expiresAt;

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
