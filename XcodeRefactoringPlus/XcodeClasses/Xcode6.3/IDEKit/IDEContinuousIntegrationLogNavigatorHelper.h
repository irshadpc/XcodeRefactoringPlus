//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDEContinuousIntegrationLogNavigatorHelper <NSObject>
- (int)statusOfIntegration:(id)arg1;
- (BOOL)isIntegrationFinished:(id)arg1;
- (void)additionalIntegrationsOnServerForBotNavigable:(id)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)loadMoreBotsInBotNavigable:(id)arg1 completionBlock:(void (^)(void))arg2;
- (void)performAction:(SEL)arg1 forNavigableItemSelection:(NSArray *)arg2 withNavigator:(IDELogNavigator *)arg3;
- (NSString *)titleForNavigableItemSelection:(NSArray *)arg1 action:(SEL)arg2;
- (BOOL)navigableItemSelection:(NSArray *)arg1 allowsAction:(SEL)arg2;
- (id <IDEKeyDrivenNavigableItemRepresentedObject>)navigableItemForIntegration:(id)arg1;
- (id <IDEKeyDrivenNavigableItemRepresentedObject>)navigableItemForBot:(id)arg1;
- (NSArray *)legacyBotNavigablesForLegacyBots:(NSArray *)arg1;
@end