@interface TSKBaseFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) struct TSCHBaseFormatProperties { unsigned char x0; unsigned char x1; BOOL x2; } chartBaseFormatProperties;
@property (readonly, nonatomic) unsigned char base;
@property (readonly, nonatomic) unsigned char basePlaces;
@property (readonly, nonatomic) BOOL baseUseMinusSign;

+ (id)defaultHexadecimalFormat;

- (id)formatByApplyingTSCHBaseFormatProperties:(struct TSCHBaseFormatProperties { unsigned char x0; unsigned char x1; BOOL x2; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asBaseFormat;
- (id)initWithBase:(unsigned char)a0 basePlaces:(unsigned char)a1 baseUseMinusSign:(BOOL)a2;

@end
