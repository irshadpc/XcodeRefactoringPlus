//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGMKMapRectMapDataAndAnnotationProvider : NSObject <MKMapViewDelegate, DBGMapDataAndAnnotationProvider>
{
    DBGMapBasedQuickLookProvider *_mapQuickLookProvider;
    struct {
        struct {
            double x;
            double y;
        } origin;
        struct {
            double width;
            double height;
        } size;
    } _mapRect;
}

- (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)_evaluateExpression:(id)arg1 failureHandler:(CDUnknownBlockType)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)provideMapAnnotations:(id)arg1;
- (void)provideMapData:(CDUnknownBlockType)arg1;
- (id)initWithQuickLookProvider:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end