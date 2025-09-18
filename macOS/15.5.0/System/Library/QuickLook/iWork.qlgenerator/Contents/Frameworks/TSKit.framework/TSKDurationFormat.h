@interface TSKDurationFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) struct TSCHDurationFormatProperties { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } chartDurationFormatProperties;
@property (readonly, nonatomic) BOOL useAutomaticUnits;
@property (readonly, nonatomic) unsigned char durationUnitSmallest;
@property (readonly, nonatomic) unsigned char durationUnitLargest;
@property (readonly, nonatomic) unsigned char durationStyle;

+ (unsigned char)automaticMaxAndMinDurationUnitsForTimeInterval:(double)a0;

- (id)formatByApplyingTSCHDurationFormatProperties:(struct TSCHDurationFormatProperties { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asDurationFormat;
- (id)initWithUseAutomaticUnits:(BOOL)a0 durationUnitSmallest:(unsigned char)a1 durationUnitLargest:(unsigned char)a2 durationStyle:(unsigned char)a3;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1;
- (unsigned char)durationUnitLargestWithTimeInterval:(double)a0;
- (id)formatByFixingUnitsIfNecessaryForTimeInterval:(double)a0;
- (unsigned char)maxAndMinDurationUnitsForTimeInterval:(double)a0;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1 showPrecision:(BOOL)a2;

@end
