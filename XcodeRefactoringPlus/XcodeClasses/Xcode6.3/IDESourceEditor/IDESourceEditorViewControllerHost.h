//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDESourceEditorViewControllerHost <NSObject>

@optional
- (void)textViewDidLoadAnnotationProviders:(DVTSourceTextView *)arg1;
- (void)textViewDidScroll:(DVTSourceTextView *)arg1;
- (void)textViewDidFinishAnimatingScroll:(DVTSourceTextView *)arg1;
- (NSMenu *)textView:(NSTextView *)arg1 menu:(NSMenu *)arg2 forEvent:(NSEvent *)arg3 atIndex:(unsigned long long)arg4;
- (DVTAnnotationContext *)annotationContextForTextView:(DVTSourceTextView *)arg1;
@end