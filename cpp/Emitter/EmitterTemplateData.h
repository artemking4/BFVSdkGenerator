// Object: EmitterTemplateData
// ClassId: 1542
// RuntimeId: 50618
// TypeInfo: 0x0000000144E2A7C0
#include "../Core/DataContainer.h"
#include "../Emitter/ProcessorData.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Emitter/EmittableType.h"
#include "../Emitter/EmittableAlignment.h"
#include "../Core/Vec3.h"
#include "../Render/MeshAsset.h"
#include "../Entity/ObjectVariation.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Emitter/EmitterDrawOrder.h"
#include "../Global/Int32.h"
#include "../EffectBase/EffectParameter.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterTemplateData : public Core::DataContainer {
        Emitter::ProcessorData RootProcessor; // 0x18
        Uint32 MaxCount; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 WorldAlignmentDirection; // 0x30
        Core::Vec3 OrientToPosition; // 0x40
        Float32 Lifetime; // 0x50
        Float32 TimeScale; // 0x54
        Uint32 LifetimeFrameCount; // 0x58
        Float32 KillRibbonTailDistance; // 0x5C
        Float32 ExclusionVolumeFadeOutTime; // 0x60
        Emitter::EmittableType EmittableType; // 0x64
        Emitter::EmittableAlignment EmittableAlignment; // 0x68
        Float32 MotionStretchMultiplier; // 0x6C
        Float32 MotionStretchViewMultiplier; // 0x70
        Float32 MotionStretchLengthClamp; // 0x74
        Float32 MotionStretchRelativeLengthClamp; // 0x78
        char pad_0x7C[0x4];
        Render::MeshAsset Mesh; // 0x80
        Entity::ObjectVariation ObjectVariation; // 0x88
        Float32 EmissiveExposureFactor; // 0x90
        Float32 VertexPixelLightingBlendFactor; // 0x94
        Float32 GlobalLocalNormalBlendFactor; // 0x98
        Float32 SoftParticlesFadeDistanceMultiplier; // 0x9C
        Float32 LightWrapAroundFactor; // 0xA0
        Float32 BentNormalFactor; // 0xA4
        Float32 LightMultiplier; // 0xA8
        Float32 BendingFactor; // 0xAC
        Float32 MicroVariationSmoothingFactor; // 0xB0
        Float32 SunVolumetricShadowAbsorptionScale; // 0xB4
        Float32 SunVolumetricShadowAbsorptionR; // 0xB8
        Float32 SunVolumetricShadowAbsorptionG; // 0xBC
        Float32 SunVolumetricShadowAbsorptionB; // 0xC0
        Float32 SunVolumetricShadowPhaseG0; // 0xC4
        Float32 SunVolumetricShadowPhaseG1; // 0xC8
        Float32 SunVolumetricShadowOffset; // 0xCC
        Float32 CameraBias; // 0xD0
        Float32 FlipUProbability; // 0xD4
        Float32 FlipVProbability; // 0xD8
        char pad_0xDC[0x4];
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0xE0
        Float32 AnimationFrameCount; // 0x108
        Float32 AnimationFrameColumnCount; // 0x10C
        Emitter::EmitterDrawOrder EmitterDrawOrder; // 0x110
        Float32 ParticleCullingFactor; // 0x114
        Float32 MinSpawnDistance; // 0x118
        Float32 MaxSpawnDistance; // 0x11C
        Float32 EmitterMaxSpawnDistance; // 0x120
        Float32 MinScreenArea; // 0x124
        Float32 MeshCullingDistance; // 0x128
        Float32 MeshCullingNearDistance; // 0x12C
        Int32 SkipUpdateMaxCount; // 0x130
        Float32 SkipSimulationDistance; // 0x134
        Float32 PreciseWindAndForceMaxDistance; // 0x138
        Float32 TurbulenceMaxDistance; // 0x13C
        Float32 DistanceScaleLength; // 0x140
        Float32 DistanceScaleNearValue; // 0x144
        Float32 DistanceScaleFarValue; // 0x148
        Float32 SpeedNormalizationValue; // 0x14C
        Float32 WindSpeedNormalizationValue; // 0x150
        Float32 TravelledDistanceNormalizationValue; // 0x154
        Array<EffectBase::EffectParameter> PerParticleEffectParameters; // 0x158
        Float32 MinDistanceTravelledBeforeSpawn; // 0x160
        Float32 CullFadeNearDistance; // 0x164
        Float32 CullFadeNearRange; // 0x168
        Float32 CullFadeFarDistance; // 0x16C
        Float32 CullFadeFarRange; // 0x170
        char pad_0x174[0x4];
        CString DebugName; // 0x178
        Boolean RepeatParticleSpawning; // 0x180
        Boolean FollowSpawnSource; // 0x181
        Boolean FollowSpawnSourceVelocity; // 0x182
        Boolean KillParticlesWithEmitter; // 0x183
        Boolean SmoothRibbonSpawn; // 0x184
        Boolean ExclusionVolumeCullEnable; // 0x185
        Boolean ExclusionVolumeFadeOutEnable; // 0x186
        Boolean ExclusionVolumeWorldWindEnable; // 0x187
        Boolean Emissive; // 0x188
        Boolean Opaque; // 0x189
        Boolean MeshParticlesMotionBlur; // 0x18A
        Boolean ReceiveSunShadow; // 0x18B
        Boolean ForceNiceSorting; // 0x18C
        Boolean LocalSpace; // 0x18D
        Boolean AllowScale; // 0x18E
        Boolean CameraSpace; // 0x18F
        Boolean TransparencySunShadowEnable; // 0x190
        Boolean SunVolumetricShadowEnable; // 0x191
        Boolean SnapQuadEdges; // 0x192
        Boolean EnablePyroShader; // 0x193
        Boolean CastPlanarReflectionEnable; // 0x194
        Boolean ForceFullRes; // 0x195
        Boolean FogFade; // 0x196
        Boolean LockRibbonDirection; // 0x197
        Boolean Hide; // 0x198
        Boolean Instanced; // 0x199
        Boolean SkipSpawnOutsideView; // 0x19A
        Boolean MeshCullingFromEmitterCenter; // 0x19B
        Boolean PauseSimulationWhenCulled; // 0x19C
        Boolean ModifyEmittableScaleWhenZooming; // 0x19D
        Boolean AcceptGlobalParameter1; // 0x19E
        Boolean AcceptGlobalParameter2; // 0x19F
        Boolean AcceptGlobalParameter3; // 0x1A0
        Boolean SkipNearCameraFade; // 0x1A1
        Boolean EmitterWindEvaluationEnable; // 0x1A2
        Boolean EmittableWindEvaluationEnable; // 0x1A3
        char pad_0x1A4[0xC];
    }; // 0x1B0
    static_assert(sizeof(EmitterTemplateData) == 0x1B0);
}
#pragma pack(pop)