//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitASTNode : NSObject
{
}

- (void)cleanup;
- (long long)compareLocation:(id)arg1;
- (id)location;
- (id)shortDescription;
- (id)containingClassOrExtension;
- (id)containingClass;
- (id)_containingClassAllowingExtensions:(BOOL)arg1;
- (id)containingMethodContainer;
- (id)containingMethod;
- (id)containingFunction;
- (id)containingDeclaration;
- (id)containingScope;
- (id)prettyPrint;
- (id)parent;

@end