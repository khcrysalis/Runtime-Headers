@class NSString, PBDataReader;

@interface GEOLPRVehicle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_licensePlate;
    NSString *_name;
    NSString *_powerTypeKey;
    NSString *_vehicleTypeKey;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_licensePlate : 1; unsigned char read_name : 1; unsigned char read_powerTypeKey : 1; unsigned char read_vehicleTypeKey : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasPowerTypeKey;
@property (retain, nonatomic) NSString *powerTypeKey;
@property (readonly, nonatomic) BOOL hasVehicleTypeKey;
@property (retain, nonatomic) NSString *vehicleTypeKey;
@property (readonly, nonatomic) BOOL hasLicensePlate;
@property (retain, nonatomic) NSString *licensePlate;

+ (BOOL)isValid:(id)a0;

- (BOOL)_matchesPower:(id)a0 andVehicle:(id)a1;
- (BOOL)matchesDefinedPlateCondition:(id)a0 error:(id *)a1;
- (BOOL)matchesLicensePlateRegion:(id)a0;
- (BOOL)matchesPlateInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
