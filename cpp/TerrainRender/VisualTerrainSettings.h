// Object: VisualTerrainSettings
// ClassId: 5568
// RuntimeId: 41838
// TypeInfo: 0x0000000144EB12F0
#include "../Core/DataContainer.h"
#include "../Core/QualityLevel.h"
#include "../TerrainRender/TerrainRenderMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace TerrainRender {
    class VisualTerrainSettings : public Core::DataContainer {
        Core::QualityLevel MeshScatteringQualityLevel; // 0x18
        TerrainRender::TerrainRenderMode RenderMode; // 0x1C
        Uint32 DebugColorsRangeMaxCount; // 0x20
        Float32 TriangleSizeMin; // 0x24
        Float32 LodScale; // 0x28
        Float32 LodCenterExtrapolationDistanceMax; // 0x2C
        Float32 LodCenterExtrapolationTime; // 0x30
        Float32 TextureSkipMipSpeed; // 0x34
        Float32 TessellationPatchShrink; // 0x38
        Uint32 TessellationPatchFacesPerSide; // 0x3C
        Float32 TessellatedTriWidth; // 0x40
        Float32 TessellatedTriWidthScaleForReflections; // 0x44
        Float32 TessellatedTriWidthScaleForShadows; // 0x48
        Uint32 TextureAtlasSampleCountXFactor; // 0x4C
        Uint32 TextureAtlasSampleCountYFactor; // 0x50
        Float32 TextureSamplesPerMeterMax; // 0x54
        Float32 TextureDetailFalloffFactor; // 0x58
        Float32 TextureDetailFalloffDistance; // 0x5C
        Float32 TextureDetailFalloffCurve; // 0x60
        Float32 TextureInvisibleDetailReductionFactor; // 0x64
        Float32 TextureOccludedDetailReductionFactor; // 0x68
        Uint32 TextureRenderJobCount; // 0x6C
        Uint32 RealTimeEditModeTextureRenderJobCount; // 0x70
        Uint32 TextureRenderJobsLaunchedPerFrameCountMax; // 0x74
        Uint32 RealTimeEditModeTextureRenderJobsLaunchedPerFrameCountMax; // 0x78
        Uint32 TextureTileSamplesPerSide; // 0x7C
        Uint32 TextureTileBorderWidth; // 0x80
        Int32 TextureLevelOffset; // 0x84
        Uint32 TextureClodFrameCount; // 0x88
        Float32 TextureClodCutoffPriority; // 0x8C
        Uint32 TextureStreamableTextureInstanceBufferSize; // 0x90
        Uint32 TextureCompressJobCount; // 0x94
        Int32 TextureCompressionQuality; // 0x98
        Float32 TextureDetailSlopeBoost; // 0x9C
        Float32 TextureGenerationMipBias; // 0xA0
        Float32 TextureDirtyRetryRate; // 0xA4
        Int32 TextureForceDrawPass; // 0xA8
        Uint32 TextureQuadsPerTileLevel; // 0xAC
        Float32 DecalZPassDrawDistance; // 0xB0
        Float32 DecalOffsetY; // 0xB4
        Float32 Decal3dFarDrawDistanceScaleFactor; // 0xB8
        Int32 DrawQuadtreeZoomIndex; // 0xBC
        Float32 PatchErrorFov; // 0xC0
        Float32 ZPassDistance; // 0xC4
        Float32 DebugOverlayGridSize; // 0xC8
        Float32 DebugOverlayIsolineSpacing; // 0xCC
        Uint32 SlotReuseWaitCount; // 0xD0
        Uint32 BuildJobCount; // 0xD4
        Uint32 MaxNonVisibleTextureUpdateCount; // 0xD8
        Uint32 PatchFacesPerSide; // 0xDC
        Uint32 TessellationFacesPerSideMin; // 0xE0
        Uint32 PatchSlotCount; // 0xE4
        Uint32 OccluderJobCount; // 0xE8
        Uint32 OccluderPatchFacesPerSide; // 0xEC
        Float32 OccluderLodScale; // 0xF0
        Float32 OccludedMinDistance; // 0xF4
        Uint32 MeshScatteringCellPoolCapacity; // 0xF8
        Uint32 MeshScatteringTreeNodePoolCapacity; // 0xFC
        Float32 MeshScatteringInvisibleCellFovFactor; // 0x100
        Uint32 MeshScatteringCullRecordCount; // 0x104
        Uint32 MeshScatteringBuildChannelCount; // 0x108
        Uint32 MeshScatteringBuildChannelsLaunchedPerFrameCountMax; // 0x10C
        Uint32 MeshScatteringClodFrameCount; // 0x110
        Float32 MeshScatteringWindSpeed; // 0x114
        Uint32 MeshScatteringInstancesPerCellMax; // 0x118
        Float32 MeshScatteringDensityMarginFactor; // 0x11C
        Float32 MeshScatteringPregenerationDistanceRatio; // 0x120
        Float32 MeshScatteringKeepDistanceRatio; // 0x124
        Int32 MeshScatteringVirtualTextureBlurriness; // 0x128
        Float32 MeshScatteringShadowViewCullSize; // 0x12C
        Float32 MeshScatteringDistanceScaleFactor; // 0x130
        Uint32 MeshScatteringInstanceCullJobCount; // 0x134
        Uint32 MeshScatteringInstanceCullListCount; // 0x138
        Float32 MeshScatteringSnappingGridMultiplierVertical; // 0x13C
        Float32 MeshScatteringSnappingGridMultiplierHorizontal; // 0x140
        Core::QualityLevel DetailDisplacementQualityLevel; // 0x144
        Int32 DrawDetailDisplacementTreeLevel; // 0x148
        Float32 DetailDisplacementMaxTessFactor; // 0x14C
        Float32 DetailDisplacementScale; // 0x150
        Float32 DetailDisplacementBias; // 0x154
        Float32 DetailDisplacementDensity; // 0x158
        Float32 DetailDisplacementFadeRange; // 0x15C
        Float32 HeightFieldTessellationFactor; // 0x160
        Boolean WireframeEnable; // 0x164
        Boolean Enable; // 0x165
        Boolean EditServiceEnable; // 0x166
        Boolean MultithreadLoadEnable; // 0x167
        Boolean TessellationEnable; // 0x168
        Boolean TessellationForReflectionsEnable; // 0x169
        Boolean TessellationForShadowsEnable; // 0x16A
        Boolean DetailDisplacementForReflectionsEnable; // 0x16B
        Boolean DetailDisplacementForShadowsEnable; // 0x16C
        Boolean DensityMapEnable; // 0x16D
        Boolean VertexBufferHeightsEnable; // 0x16E
        Boolean DrawVertexYTextureEnable; // 0x16F
        Boolean TextureVtIndirectionJobEnable; // 0x170
        Boolean TextureStreamingPrioritizationJobEnable; // 0x171
        Boolean TextureClodEnable; // 0x172
        Boolean TextureForceUpdateEnable; // 0x173
        Boolean TextureCompressFastAlgorithmEnable; // 0x174
        Boolean DrawTextureDebugColors; // 0x175
        Boolean TextureDrawTerrainLayersEnable; // 0x176
        Boolean TextureKeepPoolFullEnable; // 0x177
        Boolean TextureLayerCullingEnable; // 0x178
        Boolean GpuTextureCompressionEnable; // 0x179
        Boolean UseVTMaxLevelAsPatchLevel; // 0x17A
        Boolean TextureStreamingPrioritizationEnable; // 0x17B
        Boolean DetailTextureStreamingPrioritizationEnable; // 0x17C
        Boolean MeshScatteringMeshStreamingPrioritizationEnable; // 0x17D
        Boolean PrioritizationOcclusionEnable; // 0x17E
        Boolean DrawEnable; // 0x17F
        Boolean DrawPatchesEnable; // 0x180
        Boolean DetailOverlayEnable; // 0x181
        Boolean PatchInstancingEnable; // 0x182
        Boolean DrawInstancingStats; // 0x183
        Boolean DecalEnable; // 0x184
        Boolean ForceDecalReducedQuality; // 0x185
        Boolean DrawDecal2dEnable; // 0x186
        Boolean DrawDecal3dEnable; // 0x187
        Boolean DrawDecalZPassEnable; // 0x188
        Boolean DrawOnlyDecalZPassEnable; // 0x189
        Boolean DrawPatchBoxesEnable; // 0x18A
        Boolean DrawBadPatchesEnable; // 0x18B
        Boolean DrawTextureTileBoxesEnable; // 0x18C
        Boolean DrawDebugTextEnable; // 0x18D
        Boolean DrawDebugTexturesEnable; // 0x18E
        Boolean DrawQuadtreesEnable; // 0x18F
        Boolean DrawDebugPhysicsMaterialMapEnable; // 0x190
        Boolean DrawQuadtreeStatsEnable; // 0x191
        Boolean DrawQuadtreeAtlasTexturesEnable; // 0x192
        Boolean DrawIndirectionTexturesEnable; // 0x193
        Boolean DrawDynamicMask; // 0x194
        Boolean DrawWaterEnable; // 0x195
        Boolean PatchErrorFovEnable; // 0x196
        Boolean DebugOverlayGridEnable; // 0x197
        Boolean DebugOverlayIsolinesEnable; // 0x198
        Boolean DebugOverlayWireframeEnable; // 0x199
        Boolean DebugOverlaySketchTextureEnable; // 0x19A
        Boolean DebugOverlayBrushEnable; // 0x19B
        Boolean ForceGraphicsDriverCrash; // 0x19C
        Boolean ForcePatchRebuildEnable; // 0x19D
        Boolean DestroyAll; // 0x19E
        Boolean SlotDebugOutputEnable; // 0x19F
        Boolean UpdateJobsEnable; // 0x1A0
        Boolean RegenerateTexturesEnable; // 0x1A1
        Boolean DynamicMaskEnable; // 0x1A2
        Boolean PatchLodTransitionsEnable; // 0x1A3
        Boolean PatchLodTransitionsVertexShaderEnable; // 0x1A4
        Boolean PatchLodTransitionsVertexShaderDisableFixup; // 0x1A5
        Boolean PatchMaterialSortingEnable; // 0x1A6
        Boolean CullSampleBoundingBoxHeightEnable; // 0x1A7
        Boolean CastShadowsEnable; // 0x1A8
        Boolean CastPlanarReflectionEnable; // 0x1A9
        Boolean CastEnvmapReflectionEnable; // 0x1AA
        Boolean CastDecal3dPlanarReflectionEnable; // 0x1AB
        Boolean CastDecal3dEnvmapReflectionEnable; // 0x1AC
        Boolean DetailDisplacementInShadowViewEnable; // 0x1AD
        Boolean GlobalColormapEnable; // 0x1AE
        Boolean OccluderEnable; // 0x1AF
        Boolean OccluderJobEnable; // 0x1B0
        Boolean OccluderBackFaceCullingEnable; // 0x1B1
        Boolean OccludedEnable; // 0x1B2
        Boolean MeshScatteringEnable; // 0x1B3
        Boolean MeshScatteringReflectionsEnable; // 0x1B4
        Boolean MeshScatteringJobsEnable; // 0x1B5
        Boolean MeshScatteringCastShadowsEnable; // 0x1B6
        Boolean DrawMeshScatteringEnable; // 0x1B7
        Boolean DrawMeshScatteringCellBoxesEnable; // 0x1B8
        Boolean DrawMeshScatteringBatchBoxesEnable; // 0x1B9
        Boolean DrawMeshScatteringNodeBoxesEnable; // 0x1BA
        Boolean DrawMeshScatteringCulledCellBoxesEnable; // 0x1BB
        Boolean DrawMeshScatteringDebugMaskScaleTexturesEnable; // 0x1BC
        Boolean DrawMeshScatteringStatsEnable; // 0x1BD
        Boolean DrawMeshScatteringQuadtreeEnable; // 0x1BE
        Boolean MeshScatteringForceUpdateEnable; // 0x1BF
        Boolean MeshScatteringBuildVisibleFirst; // 0x1C0
        Boolean MeshScatteringMergeInstanceLists; // 0x1C1
        Boolean MeshScatteringInstanceCullBoxTestEnable; // 0x1C2
        Boolean MeshScatteringInstanceNewCodeEnable; // 0x1C3
        Boolean MeshScatteringInstanceFrustumCullEnable; // 0x1C4
        Boolean MeshScatteringInstanceOcclusionCullEnable; // 0x1C5
        Boolean MeshScatteringInstanceAdditionalCullEnable; // 0x1C6
        Boolean DrawMeshScatteringInstanceBoxesEnable; // 0x1C7
        Boolean MeshScatteringInstanceCullDynamicAllocEnable; // 0x1C8
        Boolean MeshScatteringWindEnable; // 0x1C9
        Boolean MeshScatteringVelocityVectorEnable; // 0x1CA
        Boolean RaytraceMeshScatteringEnable; // 0x1CB
        Boolean DetailDisplacementEnable; // 0x1CC
        Boolean DrawDetailDisplacementEnable; // 0x1CD
        Boolean DrawDebugDetailDisplacementEnable; // 0x1CE
        Boolean ParallelDrawUpdateEnable; // 0x1CF
        Boolean HeightfieldIndirectionWorkaround; // 0x1D0
        Boolean ForceDebugVirtualTextureColor; // 0x1D1
        char pad_0x1D2[0x6];
    }; // 0x1D8
    static_assert(sizeof(VisualTerrainSettings) == 0x1D8);
}
#pragma pack(pop)