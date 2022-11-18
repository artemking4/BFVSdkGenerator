// Object: ShaderSystemSettings
// ClassId: 4600
// RuntimeId: 60382
// TypeInfo: 0x0000000144F1E4B0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Core/QualityLevel.h"
#include "../Core/PlatformScalableInt.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class ShaderSystemSettings : public Core::DataContainer {
        Uint32 FrameMemoryBufferSize; // 0x18
        Uint32 FrameMemoryBufferSizeTarget; // 0x1C
        Core::QualityLevel ShaderQualityLevel; // 0x20
        Core::PlatformScalableInt StatsDrawCallsWarningLimit; // 0x24
        Core::PlatformScalableInt DrawBlockWarningLimit; // 0x48
        Float32 MipmapBias; // 0x6C
        Float32 MinMipmap; // 0x70
        Float32 MaxMipmap; // 0x74
        Int32 ForceMaxAnisotropy; // 0x78
        Uint32 MaxAnisotropyLow; // 0x7C
        Uint32 MaxAnisotropyMedium; // 0x80
        Uint32 MaxAnisotropyHigh; // 0x84
        Uint32 MaxAnisotropyUltra; // 0x88
        Uint32 Gen4PerformanceAnisotropyThreshold; // 0x8C
        Uint32 Gen4PerformanceMips; // 0x90
        Uint32 Gen4PerformanceZ; // 0x94
        Uint32 DrawCallMultiplier; // 0x98
        char pad_0x9C[0x4];
        CString SingleFrameBlockLogFileName; // 0xA0
        Uint32 OverdrawMaxLayerCount; // 0xA8
        Float32 InstructionCountScale; // 0xAC
        Uint32 OrbisMaxInstructionCount; // 0xB0
        Uint32 Gen4aMaxInstructionCount; // 0xB4
        Uint32 DxMaxInstructionCount; // 0xB8
        Uint32 GlslMaxInstructionCount; // 0xBC
        Float32 DistortionMaxValueScale; // 0xC0
        Float32 SubSurfaceScatteringMaxWidth; // 0xC4
        Int32 DispatchPrepareJobCount; // 0xC8
        Uint32 MaxParallelDispatchers; // 0xCC
        Uint32 DispatchJobMaxChunkCount; // 0xD0
        Uint32 MaxInstanceCount; // 0xD4
        Uint32 DxVsFunctionConstantBufferSize; // 0xD8
        Uint32 DxPsFunctionConstantBufferSize; // 0xDC
        Uint32 DxVsExternalConstantBufferSize; // 0xE0
        Uint32 DxPsExternalConstantBufferSize; // 0xE4
        Uint32 DxDispatchJobMinBlockCount; // 0xE8
        Uint32 DxDispatchJobBlocksPerCommandList; // 0xEC
        Uint32 DxConstantBufferMethod; // 0xF0
        Int32 GlesDispatchJobCount; // 0xF4
        Uint32 GlesDispatchJobMinBlockCount; // 0xF8
        Uint32 GlesDispatchJobBlocksPerCommandList; // 0xFC
        Int32 GlesDispatchProcessJobCount; // 0x100
        Uint32 OrbisDispatchJobMinBlockCount; // 0x104
        Uint32 OrbisDispatchJobBlockSize; // 0x108
        Uint32 DispatchJobBlockSize; // 0x10C
        Uint32 AdvancedStatsSmoothingFactor; // 0x110
        Uint32 OrbisDesiredPatchCount; // 0x114
        Uint32 MantleDispatchJobMinBlockCount; // 0x118
        Uint32 MantleDispatchJobBlockSize; // 0x11C
        Uint32 BalsaDispatchJobMinBlockCount; // 0x120
        Uint32 BalsaDispatchJobBlockSize; // 0x124
        Int32 ShaderSequencerMode; // 0x128
        Int32 DistantShadowCacheBiasMultipler; // 0x12C
        Float32 DistantShadowCacheBiasSlopeMultiplier; // 0x130
        Boolean FlushEnable; // 0x134
        Boolean DispatchDirectEnable; // 0x135
        Boolean DrawStats; // 0x136
        Boolean DrawAdvancedStats; // 0x137
        Boolean DrawZOnly; // 0x138
        Boolean DrawOpaque; // 0x139
        Boolean DrawOpaqueAlphaTest; // 0x13A
        Boolean DrawOpaqueAlphaTestSimple; // 0x13B
        Boolean DrawTransparent; // 0x13C
        Boolean DrawTransparentDecal; // 0x13D
        Boolean DrawTransparentDepth; // 0x13E
        Boolean DrawInlineBlocks; // 0x13F
        Boolean DrawStreamedTextureBlocks; // 0x140
        Boolean DrawNonStreamedTextureBlocks; // 0x141
        Boolean DrawInstancedBlocks; // 0x142
        Boolean DrawNonInstancedBlocks; // 0x143
        Boolean DrawTileClassifiedBlocks; // 0x144
        Boolean TileClassificationEnable; // 0x145
        Boolean OnDemandBuildingEnable; // 0x146
        Boolean OnDemandPrimingEnable; // 0x147
        Boolean OnDemandMonitoringEnable; // 0x148
        Boolean DatabaseLoadingEnable; // 0x149
        Boolean AlphaBlendEnable; // 0x14A
        Boolean ForceDoubleSided; // 0x14B
        Boolean ForcePointFiltering; // 0x14C
        Boolean ZeroViewportEnable; // 0x14D
        Boolean DepthEnable; // 0x14E
        Boolean DepthWriteEnable; // 0x14F
        Boolean DepthTestEnable; // 0x150
        Boolean StencilEnable; // 0x151
        Boolean AlphaUnrollEnable; // 0x152
        Boolean PsExclusionMaskEnable; // 0x153
        Boolean TextureGradientAdjustEnable; // 0x154
        Boolean ObjectIdEnable; // 0x155
        Boolean AddPrimitiveIdEnable; // 0x156
        Boolean ClipPlanesEnable; // 0x157
        Boolean SinglePrimitiveEnable; // 0x158
        Boolean DrawCallEnable; // 0x159
        Boolean PixBlockEventsEnable; // 0x15A
        Boolean ShaderPixScopeEnable; // 0x15B
        Boolean GcmReplayMarkersEnable; // 0x15C
        Boolean SortBlocksEnable; // 0x15D
        Boolean SimpleTexturesEnable; // 0x15E
        Boolean SimpleTextureFilteringEnable; // 0x15F
        Boolean LogEnable; // 0x160
        Boolean SingleFrameBlockLogEnable; // 0x161
        Boolean DrawBlockSummaryEnable; // 0x162
        Boolean ExternalConstantsEnable; // 0x163
        Boolean SimplePixelShaderEnable; // 0x164
        Boolean SimpleVertexShaderEnable; // 0x165
        Boolean PseudoInstancingEnable; // 0x166
        Boolean StatesEnable; // 0x167
        Boolean PixelConstantsEnable; // 0x168
        Boolean VertexConstantsEnable; // 0x169
        Boolean PixelConstantRedundancyCheckingEnable; // 0x16A
        Boolean VertexConstantRedundancyCheckingEnable; // 0x16B
        Boolean ModifiedViewProjectionEnable; // 0x16C
        Boolean BoneConstantOptimizationEnable; // 0x16D
        Boolean DispatchExecuteEnable; // 0x16E
        Boolean DispatchSetupJobEnable; // 0x16F
        Boolean DispatchPrepareBlockEnable; // 0x170
        Boolean MultisampleEnable; // 0x171
        Boolean ParallelShaderLoadingEnable; // 0x172
        Boolean DxTransparencySupersamplingEnable; // 0x173
        Boolean DxSamplerStatesEnable; // 0x174
        Boolean DxBatchedSamplerStatesEnable; // 0x175
        Boolean DxBatchedTexturesEnable; // 0x176
        Boolean DxDispatchAsync; // 0x177
        Boolean DxNullContextEnable; // 0x178
        Boolean OrbisDispatchJobEnable; // 0x179
        Boolean OrbisDispatchAsyncEnable; // 0x17A
        Boolean OrbisPrebakedDispatchDirectEnable; // 0x17B
        Boolean OrbisContextFreeDispatch; // 0x17C
        Boolean Dx12CachedInstancingBufferEnable; // 0x17D
        Boolean PrebakedDispatchYieldEnable; // 0x17E
        Boolean PrebakedDispatchHTileEnable; // 0x17F
        Boolean ShaderDispatchWorkStealingEnable; // 0x180
        Boolean DispatchStatsGatherEnable; // 0x181
        Boolean PrebakedDispatchInsertMarks; // 0x182
        Boolean OrbisAlphaTestReZEnable; // 0x183
        Boolean MantlePrimePipelinesEnable; // 0x184
        Boolean MantleDispatchJobEnable; // 0x185
        Boolean MantleDispatchAsyncEnable; // 0x186
        Boolean MantleReZEnable; // 0x187
        Boolean BalsaPrimePipelinesEnable; // 0x188
        Boolean BalsaDispatchJobEnable; // 0x189
        Boolean BalsaDispatchAsyncEnable; // 0x18A
        Boolean ConvertShaderDatabaseToShaderSequenceDatabase; // 0x18B
        Boolean Dx12BundledShaderCacheEnable; // 0x18C
        char pad_0x18D[0x3];
    }; // 0x190
    static_assert(sizeof(ShaderSystemSettings) == 0x190);
}
#pragma pack(pop)