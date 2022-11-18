// Object: MeshAsset
// ClassId: 559
// RuntimeId: 58669
// TypeInfo: 0x0000000144F1D180
#include "../RenderBase/MeshBaseAsset.h"
#include "../Global/Uint32.h"
#include "../Render/MeshLodGroup.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Render/LodDistanceMethod.h"
#include "../Global/Boolean.h"
#include "../Render/EnlightenType.h"
#include "../Core/Vec3.h"
#include "../Render/ProceduralAnimationTypeSimple.h"
#include "../Render/MeshMaterial.h"
#include "../Render/ImaginaryAudioMaterial.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 16)
namespace Render {
    class MeshAsset : public RenderBase::MeshBaseAsset {
        Array<Uint32> BlendShapeChannelHashes; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 LightProbeSampleOffset; // 0x30
        ResourceRef MeshSetResource; // 0x40
        ResourceRef OccluderMeshResource; // 0x48
        Render::MeshLodGroup LodGroup; // 0x50
        Float32 LodScale; // 0x58
        Float32 CullScale; // 0x5C
        Int32 ShaderQualitySwitch; // 0x60
        Render::LodDistanceMethod LodDistanceMethod; // 0x64
        Float32 CoverageValue; // 0x68
        Render::EnlightenType EnlightenType; // 0x6C
        Int32 EnlightenMeshLod; // 0x70
        Float32 AutoLightmapUVsMaxDistance; // 0x74
        Float32 AutoLightmapUVsExpansionFactor; // 0x78
        Float32 AutoLightmapUVsMaxNormalDeviation; // 0x7C
        Render::ProceduralAnimationTypeSimple ProceduralAnimation; // 0x80
        Array<Render::MeshMaterial> Materials; // 0x88
        Uint32 NameHash; // 0x90
        char pad_0x94[0x4];
        Render::ImaginaryAudioMaterial AudioMaterial; // 0x98
        Boolean StreamingEnable; // 0xA0
        Boolean OccluderMeshEnable; // 0xA1
        Boolean OccluderHighPriority; // 0xA2
        Boolean OccluderIsConservative; // 0xA3
        Boolean DestructionMaterialEnable; // 0xA4
        Boolean EnableEnlightenStaticOverride; // 0xA5
        Boolean LightmapUVsScaleCharts; // 0xA6
        Boolean AutoLightmapUVs; // 0xA7
        Boolean DoNotRegister; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(MeshAsset) == 0xB0);
}
#pragma pack(pop)