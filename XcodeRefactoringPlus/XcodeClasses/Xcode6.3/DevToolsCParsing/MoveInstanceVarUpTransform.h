//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MoveInstanceVarUpTransform : Transform
{
    BOOL _insertedSuperclass;
    BOOL _isIBOutlet;
    NSString *_commentString;
}

- (BOOL)performPerFile;
- (BOOL)checkPerFile;
- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (id)transformRelatedNames;

@end