//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTMeterThreshold : NSObject
{
    BOOL _showStartSection;
    BOOL _showEndSection;
    double _value;
    NSColor *_color;
}

+ (id)meterThreshold:(double)arg1 color:(id)arg2;
@property(nonatomic) BOOL showEndSection; // @synthesize showEndSection=_showEndSection;
@property(nonatomic) BOOL showStartSection; // @synthesize showStartSection=_showStartSection;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;

@end