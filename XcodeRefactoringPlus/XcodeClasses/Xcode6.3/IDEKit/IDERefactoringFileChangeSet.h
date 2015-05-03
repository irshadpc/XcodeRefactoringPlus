//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDERefactoringFileChangeSet : NSObject <IDERefactoringResult>
{
    NSMutableArray *_changes;
    DVTFilePath *_filePath;
    DVTFilePath *_tempFilePath;
    NSString *_newName;
}

+ (id)changeSetForFileAtPath:(id)arg1 transformation:(id)arg2 error:(id *)arg3;
@property(retain) NSString *newName; // @synthesize newName=_newName;
@property(readonly) NSArray *changes; // @synthesize changes=_changes;
@property(readonly) DVTFilePath *tempFilePath; // @synthesize tempFilePath=_tempFilePath;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)writeTempResults;
- (BOOL)writesOwnTempResults;
- (id)resultTempFilePath;
- (id)resultNewFileName;
- (id)resultFilePath;
- (BOOL)resultIsEditable;
@property(readonly, copy) NSString *description;
- (BOOL)applyChangesWithError:(id *)arg1;
- (BOOL)willRenameFile;
- (id)newFilePath;
- (BOOL)isEqualToFileChangeSet:(id)arg1;
- (void)addChange:(id)arg1;
- (long long)numberOfChanges;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end