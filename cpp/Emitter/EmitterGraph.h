// Object: EmitterGraph
// ClassId: 485
// RuntimeId: 51015
// TypeInfo: 0x0000000144E2A940
#include "../EmitterBase/EmitterGraphBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Emitter/EmitterGraphSpawnMode.h"
#include "../Core/QualityScalableFloat.h"
#include "../Core/QualityScalableInt.h"
#include "../Emitter/EmitterGraphMesh.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../Emitter/EmitterGraphDrawPass.h"
#include "../Emitter/EmitterGraphDrawLayer.h"
#include "../Emitter/EmitterGraphSortMode.h"
#include "../Emitter/EmitterGraphUserBuffer.h"
#include "../Global/Float32.h"
#include "../Emitter/EmitterGraphCulledBehavior.h"
#include "../Global/Int32.h"
#include "../Global/FileRef.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Core/Vec3.h"
#include "../Global/ResourceRef.h"
#include "../Global/CString.h"
#include "../Emitter/EmitterExposedInput.h"
#include "../EffectBase/EffectParameter.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Emitter {
    class EmitterGraph : public EmitterBase::EmitterGraphBaseAsset {
        Emitter::EmitterGraphSpawnMode SpawnMode; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 BoundingBoxMin; // 0x30
        Core::Vec3 BoundingBoxMax; // 0x40
        ResourceRef CompiledSpawnGraphComputeShader; // 0x50
        ResourceRef CompiledSimulateGraphComputeShader; // 0x58
        Core::QualityScalableFloat SpawnRate; // 0x60
        Core::QualityScalableInt ParticleMaxCount; // 0x74
        Core::QualityScalableFloat ParticleLifeSpan; // 0x88
        char pad_0x9C[0x4];
        Array<Emitter::EmitterGraphMesh> Meshes; // 0xA0
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0xA8
        Emitter::EmitterGraphDrawPass DrawPass; // 0xD0
        Emitter::EmitterGraphDrawLayer DrawLayer; // 0xD4
        Emitter::EmitterGraphSortMode SortMode; // 0xD8
        char pad_0xDC[0x4];
        Array<Emitter::EmitterGraphUserBuffer> UserBuffers; // 0xE0
        Core::QualityScalableFloat EmitterLifeSpan; // 0xE8
        Float32 EmitterMaxSpawnDistance; // 0xFC
        Float32 SpawnOutsideViewRadius; // 0x100
        Emitter::EmitterGraphCulledBehavior CulledBehavior; // 0x104
        Int32 SkipUpdateMaxCount; // 0x108
        Float32 EmitterMeshCullingDistance; // 0x10C
        Float32 MinScreenArea; // 0x110
        char pad_0x114[0x4];
        FileRef SpawnShaderOverride; // 0x118
        FileRef SimulateShaderOverride; // 0x120
        RenderBase::TextureBaseAsset Texture0; // 0x128
        RenderBase::TextureBaseAsset Texture1; // 0x130
        Float32 GpuParticleCullingRadius; // 0x138
        Core::QualityScalableFloat GpuParticleCullingDistance; // 0x13C
        CString VertexShaderFragmentAssetName; // 0x150
        Array<Emitter::EmitterExposedInput> EmitterGraphParams; // 0x158
        Array<EffectBase::EffectParameter> EffectParams; // 0x160
        FileRef MeshVertexShaderFragmentCodeFile; // 0x168
        CString MeshVertexShaderFragmentAssetName; // 0x170
        Uint32 ParticleDataByteStride; // 0x178
        Uint32 ParticleDataBufferLayoutHash; // 0x17C
        Boolean UseNodeGraph; // 0x180
        Boolean PlanarReflectionsEnabled; // 0x181
        Boolean NormalizeMeshStartIds; // 0x182
        Boolean KillOnStop; // 0x183
        Boolean SkipSpawnOutsideView; // 0x184
        Boolean ZBufferEnable; // 0x185
        Boolean GpuParticleCullingEnable; // 0x186
        Boolean GraphSampleForceVolumes; // 0x187
        Boolean GraphSampleExclusionVolumes; // 0x188
        Boolean IsUsingOpaqueLitRootNode; // 0x189
        Boolean IsUsingLitRootNode; // 0x18A
        Boolean IsUsingGpuLighting; // 0x18B
        char pad_0x18C[0x4];
    }; // 0x190
    static_assert(sizeof(EmitterGraph) == 0x190);
}
#pragma pack(pop)