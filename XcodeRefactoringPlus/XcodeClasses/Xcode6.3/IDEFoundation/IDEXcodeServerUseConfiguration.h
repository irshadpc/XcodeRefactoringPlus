//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEXcodeServerUseConfiguration : NSObject
{
    BOOL _testInstallShouldCopyEntireBuiltProductsDir;
    DVTFilePath *_controlPath;
    NSString *_testUserName;
    DVTFilePath *_testUserPath;
}

+ (id)sharedServerUseConfiguration;
+ (void)initialize;
@property(readonly) BOOL testInstallShouldCopyEntireBuiltProductsDir; // @synthesize testInstallShouldCopyEntireBuiltProductsDir=_testInstallShouldCopyEntireBuiltProductsDir;
@property(readonly, copy) DVTFilePath *testUserPath; // @synthesize testUserPath=_testUserPath;
@property(readonly, copy) NSString *testUserName; // @synthesize testUserName=_testUserName;
@property(readonly, copy) DVTFilePath *controlPath; // @synthesize controlPath=_controlPath;
- (void).cxx_destruct;
- (id)initWithControlPath:(id)arg1 testUserName:(id)arg2 testUserPath:(id)arg3;

@end