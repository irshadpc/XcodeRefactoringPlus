//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface Xcode3AddContainerItemsAssistant : IDEAddContainerItemsAssistant
{
    Xcode3TargetMembershipDataSource *_dataSource;
    NSTableView *_targetsTable;
    NSTextField *_targetsLabel;
}

+ (void)_recursivelyAddContainerItems:(id)arg1 toTargets:(id)arg2;
- (void).cxx_destruct;
- (void)loadView;
- (id)_inputFileTypesForContext:(id)arg1;

@end