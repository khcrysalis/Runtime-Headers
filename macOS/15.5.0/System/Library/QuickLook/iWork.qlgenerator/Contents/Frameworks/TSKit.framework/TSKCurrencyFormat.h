@class NSString;

@interface TSKCurrencyFormat : TSKFormat <TSCHNumericFormat, NSCopying> {
    long long _propertiesCacheKey;
}

@property (readonly, nonatomic) struct TSCHCurrencyFormatProperties { struct TSCHNumericFormatProperties { unsigned long long x0; unsigned char x1; BOOL x2; } x0; BOOL x1; id x2; } chartCurrencyFormatProperties;
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
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) unsigned long long currencyCodeIndex;
@property (readonly, nonatomic) BOOL accountingStyle;
@property (readonly, nonatomic) BOOL usePlusSign;

+ (id)defaultCurrencyFormatWithCurrencyCode:(id)a0;

- (id)chartNumericFormatByApplyingTSCHNumericFormatProperties:(struct TSCHNumericFormatProperties { unsigned long long x0; unsigned char x1; BOOL x2; })a0;
- (id)formatByApplyingTSCHCurrencyFormatProperties:(struct TSCHCurrencyFormatProperties { struct TSCHNumericFormatProperties { unsigned long long x0; unsigned char x1; BOOL x2; } x0; BOOL x1; id x2; })a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asCurrencyFormat;
- (id)initWithDecimalPlaces:(unsigned long long)a0 negativeStyle:(unsigned char)a1 showSeparator:(BOOL)a2 accountingStyle:(BOOL)a3 currencyCode:(id)a4;
- (id)decimalFormatterForLocale:(id)a0;

@end
