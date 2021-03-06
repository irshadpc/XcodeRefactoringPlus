//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECodesignIssueResolutionWindowController : DVTPagingSheetWindowController_AppKitAutoLayout
{
    BOOL _fixIssueImmediately;
    NSError *_codesignResolutionError;
    id <IDEBlueprint> _blueprint;
    id <IDECodesigningInfoDelegate> _codesignInfoDelegate;
    IDECodesignIssueAlertConfiguration *_alertConfig;
    DVTCodesignResolutionInputs *_codesignResolutionInputs;
    unsigned long long _remainingResolutionAttempts;
}

@property unsigned long long remainingResolutionAttempts; // @synthesize remainingResolutionAttempts=_remainingResolutionAttempts;
@property BOOL fixIssueImmediately; // @synthesize fixIssueImmediately=_fixIssueImmediately;
@property(copy) DVTCodesignResolutionInputs *codesignResolutionInputs; // @synthesize codesignResolutionInputs=_codesignResolutionInputs;
@property(retain) IDECodesignIssueAlertConfiguration *alertConfig; // @synthesize alertConfig=_alertConfig;
@property(readonly) id <IDECodesigningInfoDelegate> codesignInfoDelegate; // @synthesize codesignInfoDelegate=_codesignInfoDelegate;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(retain) NSError *codesignResolutionError; // @synthesize codesignResolutionError=_codesignResolutionError;
- (void).cxx_destruct;
- (void)_cancel;
- (void)_done;
- (id)_stubError;
- (void)_transitionToAlertWithTitle:(id)arg1 message:(id)arg2 primaryButtonTitle:(id)arg3 primaryButtonEnabled:(BOOL)arg4 primaryAction:(CDUnknownBlockType)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEnabled:(BOOL)arg7 secondaryAction:(CDUnknownBlockType)arg8;
- (void)_invokeResolutionOption:(id)arg1;
- (void)_initialSetup;
- (void)retryResolution;
- (void)handleResolutionDescription:(id)arg1;
- (void)presentStubError;
- (void)presentResolutionError:(id)arg1;
- (void)diagnoseIssue;
- (void)secondaryAlertAction;
- (void)primaryAlertAction;
- (id)initWithCodesignResolutionError:(id)arg1 blueprint:(id)arg2 codesignInfoDelegate:(id)arg3;
- (void)windowDidLoad;
- (void)beginSheetModalForWindow:(id)arg1 fixIssueImmediately:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) DVTLogAspect *logAspect;
- (void)primitiveInvalidate;

@end