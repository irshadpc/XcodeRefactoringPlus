//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUTraceGroupItem : GPUTraceOutlineItem
{
    NSString *_descText;
    unsigned int _groupType;
    int _functionIndex;
    int _displayableCallCount;
    int _apiCallCount;
    BOOL _isExpanded;
    int _maxIssueSeverity;
    BOOL _isHidden;
}

@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(readonly, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(nonatomic) int apiCallCount; // @synthesize apiCallCount=_apiCallCount;
@property(nonatomic) int displayableCallCount; // @synthesize displayableCallCount=_displayableCallCount;
@property(readonly, nonatomic) unsigned int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
- (void).cxx_destruct;
- (id)UUIDSection;
@property(readonly, nonatomic) BOOL automaticallyExpand;
@property(readonly, nonatomic) BOOL showsDraws;
@property(readonly, nonatomic) BOOL isSimpleGroup;
- (id)initWithController:(id)arg1 parent:(id)arg2 label:(id)arg3 groupType:(unsigned int)arg4 functionIndex:(int)arg5 descText:(id)arg6;
- (id)navigableItem_subtitle;
- (struct DYShaderProfilerTiming)shaderTime;

@end