@class NSString;

@interface WFURLParameter : WFTextInputParameter

@property (nonatomic, readonly) NSString *defaultPlaceholder;

- (id)keyboardType;
- (id)autocorrectionType;
- (id)autocapitalizationType;
- (id)textContentType;
- (Class)singleStateClass;

@end
