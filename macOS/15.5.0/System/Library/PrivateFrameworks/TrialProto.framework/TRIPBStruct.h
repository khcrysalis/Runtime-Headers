@class NSDictionary, NSMutableDictionary;

@interface TRIPBStruct : TRIPBMessage

@property (readonly, copy, nonatomic) NSDictionary *mlr_dictionaryRepresentation;
@property (retain, nonatomic) NSMutableDictionary *fields;
@property (readonly, nonatomic) unsigned long long fields_Count;

+ (id)descriptor;

- (id)mlr_arrayWithTRIPBListValue:(id)a0;
- (id)mlr_objectForTRIPBValue:(id)a0;

@end
