//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBConnection : NSObject <NSCoding, NSCopying>
{
    id source;
    id destination;
    NSString *label;
}

+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)determineBestInitialSelectionForObjects:(id)arg1 sourceObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)shouldFollowDestinationToPasteboardAsExternalConnection;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (void)objectContainer:(id)arg1 willRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveObject:(id)arg2 context:(id)arg3;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)ibSmartConnectionComparisonString;
- (long long)compareLabels:(id)arg1;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEquivalentToPrototypeFor:(id)arg1 inDocument:(id)arg2;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)displayGroupNameFromReferenceEndPoint:(id)arg1;
- (id)displayGroupNameForDragFromObject:(id)arg1 toObject:(id)arg2;
- (BOOL)isCatchAllPrototypeForDisplayGroup;
- (id)printablePListForIBToolInDocument:(id)arg1;
- (id)description;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (BOOL)validateEndPoint:(id)arg1;
- (BOOL)canCoexistsWithOtherConnectionsHavingSameEndPoint;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)allowsEstablishingNewConnections;
- (id)label;
- (id)supersedingEndPoints;
- (id)parentsWhosChildrenCouldIntroduceSupersessionOnAddition;
- (id)supersedingDisplayValues;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)displayNameWithRespectToPedecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)destination;
- (void)setLabel:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setEndPoint:(id)arg1;
- (id)endPoint;
- (id)equivalentSourceInDocument:(id)arg1;
- (id)equivalentDestinationInDocument:(id)arg1;
- (id)endPointForEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (void)completeWithComponentChoice:(id)arg1;
- (id)missingComponentChoices;
- (id)source;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 andLabel:(id)arg2;
- (id)initWithDestination:(id)arg1;
- (id)initWithDestination:(id)arg1 andLabel:(id)arg2;
- (id)interfaceBuilderConnectionIdentifier;
- (id)XLIFFClassName:(id)arg1;
- (long long)XLIFFMemberID:(id)arg1;

@end