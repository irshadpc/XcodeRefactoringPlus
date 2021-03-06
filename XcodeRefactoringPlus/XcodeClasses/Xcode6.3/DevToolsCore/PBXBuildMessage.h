//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXBuildMessage : NSObject
{
    int _type;
    NSString *_messageString;
    NSArray *_fileLocations;
    unsigned long long _buildLogItemIdentifier;
    NSMutableArray *_submessages;
}

+ (id)buildErrorMessageWithFormat:(id)arg1;
+ (id)buildWarningMessageWithFormat:(id)arg1;
+ (id)buildNoticeMessageWithFormat:(id)arg1;
@property(nonatomic) unsigned long long buildLogItemIdentifier; // @synthesize buildLogItemIdentifier=_buildLogItemIdentifier;
- (id)description;
- (BOOL)isError;
- (BOOL)isAnalyzerResult;
- (BOOL)isWarning;
- (BOOL)isNotice;
- (id)submessages;
- (void)addSubmessage:(id)arg1;
- (unsigned long long)lineNumber;
- (id)filePath;
- (void)setFileLocations:(id)arg1;
- (id)fileLocations;
- (void)setMessageString:(id)arg1;
- (id)messageString;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)arg1 messageString:(id)arg2;
- (id)initWithType:(int)arg1 messageString:(id)arg2 fileLocations:(id)arg3;

@end