/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKBuildingFootprintMapModel;

// Not exported
@interface VK3DObjectSubMapModel : NSObject
{
    struct unique_ptr<ggl::FragmentedPool<ggl::Building::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Building::Shader::Setup>>> _objectShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _object3DRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _objectRenderItemPool;
    VKBuildingFootprintMapModel *_buildingMapModel;
}

@property(nonatomic) VKBuildingFootprintMapModel *buildingMapModel; // @synthesize buildingMapModel=_buildingMapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)resetPools;
- (void)flushPools;
- (id)initWithBuildingMapModel:(id)arg1;

@end
