//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEGeneratedSwiftInterfaceContentProvider : DVTGeneratedContentProvider
{
    NSURL *_originalURL;
    NSURL *_temporaryFileURL;
}

- (void).cxx_destruct;
- (void)generateContentForURL:(id)arg1 waitingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)temporaryFileURL;
- (void)primitiveInvalidate;

@end