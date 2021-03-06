//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSUIStatusBadgesView : NSView
{
    NSMutableArray *_badgeViews;
    XCSUIStatusBadge *_errorsBadge;
    XCSUIStatusBadge *_warningsBadge;
    XCSUIStatusBadge *_issuesBadge;
    XCSUIStatusBadge *_testsBadge;
    BOOL _insetFirstBadge;
    NSArray *_badges;
}

@property(nonatomic) BOOL insetFirstBadge; // @synthesize insetFirstBadge=_insetFirstBadge;
@property(copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
- (void)refreshBadges;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)placeBadges;
- (void)removeBadgeSubviews;
- (void)resetBadgeSelection:(id)arg1 ressetAll:(BOOL)arg2;

@end