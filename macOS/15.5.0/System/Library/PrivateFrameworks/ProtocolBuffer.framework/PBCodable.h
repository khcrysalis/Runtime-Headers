@class NSString, NSData;

@interface PBCodable : NSObject <BMStoreData, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *data;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)options;

- (void)setClientMetricsIfSupported:(id)a0;
- (id)serialize;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)formattedText;

@end
