@class GMSSchemaGMSClientEventMetadata, SISchemaInstrumentationMessage, GMSSchemaGMSPrivateCloudMetricsReceived, NSData, GMSSchemaGMSModelRequestContext;

@interface GMSSchemaGMSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) GMSSchemaGMSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GMSSchemaGMSModelRequestContext *gmsModelRequestContext;
@property (nonatomic) BOOL hasGmsModelRequestContext;
@property (retain, nonatomic) GMSSchemaGMSPrivateCloudMetricsReceived *gmsPrivateCloudMetricsReceived;
@property (nonatomic) BOOL hasGmsPrivateCloudMetricsReceived;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteGmsModelRequestContext;
- (void)deleteGmsPrivateCloudMetricsReceived;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
