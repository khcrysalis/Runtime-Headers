@class SISchemaInstrumentationMessage, ACTVSchemaACTVButtonInteractionDetected, NSData, ACTVSchemaACTVTurnActivated, ACTVSchemaACTVClientEventMetadata;

@interface ACTVSchemaACTVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ACTVSchemaACTVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ACTVSchemaACTVButtonInteractionDetected *buttonInteractionDetected;
@property (nonatomic) BOOL hasButtonInteractionDetected;
@property (retain, nonatomic) ACTVSchemaACTVTurnActivated *turnActivated;
@property (nonatomic) BOOL hasTurnActivated;
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
- (void)deleteButtonInteractionDetected;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteEventMetadata;
- (void)deleteTurnActivated;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
