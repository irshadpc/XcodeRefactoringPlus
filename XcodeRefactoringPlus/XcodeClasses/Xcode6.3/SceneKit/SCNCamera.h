//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNCamera : NSObject <SCNAnimatable, SCNTechniqueSupport, NSCopying, NSSecureCoding>
{
    id _reserved;
    // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}{__C3DProjectionInfos=b1b1b1dddddd(C3DMatrix4x4=[16f][4])}ffffQ^{__C3DFXTechnique}}, name: _camera
    unsigned int _isPresentationInstance:1;
    unsigned int _custom:1;
    unsigned int _usesOrthographicProjection:1;
    unsigned int _automaticallyAdjustsZRange:1;
    SCNOrderedDictionary *_animations;
    NSString *_name;
    double _xFov;
    double _yFov;
    double _orthographicScale;
    double _zNear;
    double _zFar;
    float _focalDistance;
    float _focalBlurRadius;
    float _focalSize;
    float _aperture;
    unsigned long long _categoryBitMask;
    struct CATransform3D _projectionTransform;
    SCNTechnique *_technique;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)camera;
+     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}{__C3DProjectionInfos=b1b1b1dddddd(C3DMatrix4x4=[16f][4])}ffffQ^{__C3DFXTechnique}}16, name: cameraWithCameraRef:
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (struct CATransform3D)projectionTransform;
-     // Error parsing type: ^{__C3DCamera={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}{__C3DProjectionInfos=b1b1b1dddddd(C3DMatrix4x4=[16f][4])}ffffQ^{__C3DFXTechnique}}16@0:8, name: cameraRef
- (void)setYMag:(double)arg1;
- (double)yMag;
- (void)setXMag:(double)arg1;
- (double)xMag;
@property(nonatomic) double zNear;
@property(nonatomic) double zFar;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(nonatomic) BOOL usesOrthographicProjection;
- (void)setProjectionTransform:(struct CATransform3D)arg1;
@property(nonatomic) double orthographicScale;
@property(nonatomic) double focalSize;
@property(nonatomic) double focalDistance;
@property(nonatomic) double focalBlurRadius;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) BOOL automaticallyAdjustsZRange;
@property(nonatomic) double aperture;
- (BOOL)hasCustomProjectionTransform;
- (void)_registerAsObserver;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationCamera;
@property(copy, nonatomic) SCNTechnique *technique;
- (void)_syncObjCModel;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
- (id)animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}{__C3DProjectionInfos=b1b1b1dddddd(C3DMatrix4x4=[16f][4])}ffffQ^{__C3DFXTechnique}}16, name: initPresentationCameraWithCameraRef:
-     // Error parsing type: @24@0:8^{__C3DCamera={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}{__C3DProjectionInfos=b1b1b1dddddd(C3DMatrix4x4=[16f][4])}ffffQ^{__C3DFXTechnique}}16, name: initWithCameraRef:
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end