//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICQuickLookController : NSObject <QLPreviewPanelDelegate, QLPreviewPanelDataSource, DVTInvalidation>
{
    NSMutableDictionary *_previewItemsToFrames;
    NSArray *_previewItems;
    NSArray *_frames;
    NSView *_coordinateSpaceView;
    NSResponder *_sourceController;
    BOOL _controllingPanel;
    BOOL _tearingDown;
}

+ (BOOL)validateMenuItem:(id)arg1 forController:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)validateQuickLookMenuItem:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)updatePreviewItems:(id)arg1 fromFrames:(id)arg2 inView:(id)arg3;
- (void)userDidCancelPreview:(id)arg1;
- (void)userDidTogglePreview:(id)arg1;
- (void)primitiveInvalidate;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)controlledPanel;
- (BOOL)isControllingPanel;
- (id)existingPanel;
- (id)initWithSourceController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end