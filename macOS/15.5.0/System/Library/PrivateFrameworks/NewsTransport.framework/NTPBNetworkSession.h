@interface NTPBNetworkSession : PBCodable <NSCopying> {
    struct { unsigned char sessionID : 1; unsigned char cellularRadioAccessTechnology : 1; unsigned char wifiReachable : 1; } _has;
}

@property (readonly, nonatomic) int pbCellularRadioAccessTechnology;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) BOOL wifiReachable;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
