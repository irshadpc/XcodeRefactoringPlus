//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGSceneViewRangeSliderCell : NSSliderCell
{
    double _leftValue;
    double _clickOffsetFromEdge;
    BOOL _isDraggingLeftKnob;
    BOOL _isDraggingRightKnob;
    BOOL _isDraggingActiveRangeArea;
    NSImage *_leftKnobImage;
    NSImage *_leftKnobPressedImage;
    NSImage *_rightKnobImage;
    NSImage *_rightKnobPressedImage;
}

+ (id)keyPathsForValuesAffectingRightValue;
- (void).cxx_destruct;
- (double)_valueForPixelLocation:(double)arg1;
- (BOOL)_handleTrackingLastPoint:(struct CGPoint)arg1 currentPoint:(struct CGPoint)arg2 inView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (id)_knobFillColor:(BOOL)arg1;
@property(readonly) NSGradient *knobBorderGradient;
@property(readonly) NSColor *knobStrokeColor;
- (struct CGSize)_knobSize;
- (struct CGRect)_rightKnobRect;
- (struct CGRect)_leftKnobRect;
- (struct CGRect)_trackLiveAreaRect;
- (struct CGRect)_trackRect;
- (id)_rightKnobImage:(struct CGRect)arg1 pressed:(BOOL)arg2;
- (void)_drawRightKnob:(struct CGRect)arg1;
- (id)_leftKnobImage:(struct CGRect)arg1 pressed:(BOOL)arg2;
- (void)_drawLeftKnob:(struct CGRect)arg1;
- (void)_drawTrackStartActiveRange:(double)arg1 endActiveRange:(double)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_isValueInBounds:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
@property double rightValue;
@property double leftValue;

@end