@class ASRSchemaASRRecognitionResult, NSData;

@interface ASRSchemaASRPackage : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRRecognitionResult *rawRecognition;
@property (nonatomic) BOOL hasRawRecognition;
@property (retain, nonatomic) ASRSchemaASRRecognitionResult *postItn;
@property (nonatomic) BOOL hasPostItn;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deletePostItn;
- (void)deleteRawRecognition;
- (id)suppressMessageUnderConditions;

@end
