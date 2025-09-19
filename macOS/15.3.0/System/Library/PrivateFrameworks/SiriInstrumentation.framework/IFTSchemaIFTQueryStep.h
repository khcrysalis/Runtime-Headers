@class NSArray, IFTSchemaIFTStatementId, NSData;

@interface IFTSchemaIFTQueryStep : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) IFTSchemaIFTStatementId *statementId;
@property (nonatomic) BOOL hasStatementId;
@property (copy, nonatomic) NSArray *queries;
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
- (id)queriesAtIndex:(unsigned long long)a0;
- (void)addQueries:(id)a0;
- (void)clearQueries;
- (void)deleteExists;
- (void)deleteQueries;
- (void)deleteStatementId;
- (unsigned long long)queriesCount;
- (id)suppressMessageUnderConditions;

@end
