@class NSString, NSNumber, NTPBDate;

@interface NTPBAudioPlaylistItem : PBCodable <FCKeyValueStoreCoding, FCReorderableTagSubscription, NSCopying> {
    struct { unsigned char listOrder : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *order;
@property (readonly, copy, nonatomic) NSString *tagID;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasDateAdded;
@property (retain, nonatomic) NTPBDate *dateAdded;
@property (nonatomic) BOOL hasListOrder;
@property (nonatomic) long long listOrder;

+ (id)articleIDFromIdentifier:(id)a0;
+ (id)identifierFromArticleID:(id)a0;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

- (id)asCKRecord;
- (id)copyWithOrder:(id)a0;
- (id)initWithCKRecord:(id)a0;
- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
