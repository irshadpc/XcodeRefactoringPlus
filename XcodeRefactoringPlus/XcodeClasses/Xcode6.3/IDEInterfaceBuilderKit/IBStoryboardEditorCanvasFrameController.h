//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBStoryboardEditorCanvasFrameController : IBViewEditorCanvasFrameController
{
}

- (void)openEditorWithMouseEvent:(id)arg1;
- (BOOL)editorCanvasFrame:(id)arg1 interceptDoubleClickedEvent:(id)arg2;
- (id)connectionSourceForEvent:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
@property(readonly) IBStoryboardCanvasViewController *canvasViewController;

@end