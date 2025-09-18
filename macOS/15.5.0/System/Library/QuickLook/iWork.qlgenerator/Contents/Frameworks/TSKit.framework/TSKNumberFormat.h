@class NSString;

@interface TSKNumberFormat : TSKFormat <TSCHNumericFormat, NSCopying> {
    long long _propertiesCacheKey;
}

@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) struct TSCHNumericFormatProperties { unsigned long long x0; unsigned char x1; BOOL x2; } chartNumericFormatProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long decimalPlaces;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (readonly, nonatomic) BOOL usePlusSign;

- (id)chartNumericFormatByApplyingTSCHNumericFormatProperties:(struct TSCHNumericFormatProperties { unsigned long long x0; unsigned char x1; BOOL x2; })a0;
- (BOOL)isEqual:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asNumberFormat;
- (id)initWithFormatType:(unsigned int)a0 decimalPlaces:(unsigned long long)a1 negativeStyle:(unsigned char)a2 showSeparator:(BOOL)a3;
- (id)decimalFormatterForLocale:(id)a0;

@end
