/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKModelObject.h>

@class MDTextureCanvas, NSMutableSet, VKCamera, VKLayoutContext, VKMapModel, VKMapRasterizerRoot, VKScene, VKTileProvider;

// Not exported
@interface VKMapRasterizer : VKModelObject
{
    struct VKTileKey _keyToRasterize;
    VKScene *_rasterizeScene;
    NSMutableSet *_rasterizeTilesToRender;
    VKLayoutContext *_rasterizeLayoutContext;
    MDTextureCanvas *_rasterizeCanvas;
    VKTileProvider *_tileProvider;
    Matrix_5173352a _backgroundColor;
    unsigned long long _rasterizingScaleFactor;
    VKMapRasterizerRoot *_root;
    VKCamera *_rasterizeCamera;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer>> _textureBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderToTextureTarget;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue>> _rttQueue;
    struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool>> _texturePool;
    shared_ptr_479d1306 _renderTexture;
    unsigned int _canvasPointSize;
    VKMapModel *_mapModel;
}

@property(nonatomic) unsigned long long rasterizingScaleFactor; // @synthesize rasterizingScaleFactor=_rasterizingScaleFactor;
@property(nonatomic) Matrix_5173352a backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) VKTileProvider *tileProvider; // @synthesize tileProvider=_tileProvider;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 dispatchQueue:(id)arg4;
- (void)prepRenderTargetWithTexture:(const shared_ptr_479d1306 *)arg1;
- (void)createRasterizationLayoutContext:(id)arg1 canvasPointSize:(unsigned int)arg2;
- (void)updateCameraFromKey:(const struct VKTileKey *)arg1;
- (_Bool)isBusy;
- (void)rasterizeKey:(const struct VKTileKey *)arg1 scene:(id)arg2;
- (void)addSubmodel:(id)arg1;
- (void)flushTextureCache;
- (void)reset;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) const struct VKTileKey *keyToRasterize;

@end
