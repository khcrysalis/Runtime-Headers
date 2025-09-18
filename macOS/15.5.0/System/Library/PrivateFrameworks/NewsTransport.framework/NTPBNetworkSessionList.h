@class NSString, NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <FCKeyValueStoreCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;
+ (Class)networkEventsType;
+ (Class)networkSessionsType;

- (void)writeToKeyValuePair:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNetworkEvents:(id)a0;
- (void)clearNetworkEvents;
- (id)networkEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkEventsCount;
- (void)addNetworkSessions:(id)a0;
- (void)clearNetworkSessions;
- (id)networkSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkSessionsCount;

@end
