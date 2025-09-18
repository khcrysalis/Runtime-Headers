@class NSString, NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *tokens;

+ (id)createUsingPhrases:(id)a0 andUtterances:(id)a1;
+ (id)speechPartialResult;
+ (id)speechPartialResultWithDictionary:(id)a0 context:(id)a1;

- (id)af_bestTextInterpretation;
- (id)af_correctionContext;
- (id)af_speechModel;
- (id)af_tokens;
- (id)af_userUtteranceValue;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
