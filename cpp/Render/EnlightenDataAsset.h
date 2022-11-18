// Object: EnlightenDataAsset
// ClassId: 488
// RuntimeId: 13982
// TypeInfo: 0x0000000144F16ED0
#include "../RenderBase/EnlightenBaseAsset.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Render/TextureAsset.h"
#include "../Render/EnlightenOutputFormat.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Render/EnlightenTransparencyMode.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 16)
namespace Render {
    class EnlightenDataAsset : public RenderBase::EnlightenBaseAsset {
        char pad_0x28[0x8];
        Core::Vec3 DistantLightprobePosition; // 0x30
        ResourceRef DatabaseResource; // 0x40
        CString Group; // 0x48
        Render::TextureAsset DebugChartTexture; // 0x50
        Render::TextureAsset DebugBackFaceTexture; // 0x58
        Render::TextureAsset SkyVisibilityTexture; // 0x60
        Render::EnlightenOutputFormat OutputFormat; // 0x68
        Uint32 SystemGridSize; // 0x6C
        Int32 SystemLightmapSize; // 0x70
        Int32 MaxSystemLightmapSize; // 0x74
        Int32 MaxLightmapSize; // 0x78
        Float32 SystemInfluenceRadius; // 0x7C
        Float32 ClusterSize; // 0x80
        Uint32 IrBudget; // 0x84
        Uint32 IrradianceQualityMultiplier; // 0x88
        Float32 StitchingDistanceMultiplier; // 0x8C
        Float32 EdgeStitchingDistanceMultiplier; // 0x90
        Float32 MaxStitchingAngle; // 0x94
        Float32 MaxPixelStitchingAngle; // 0x98
        Float32 DependencyVisibilityThreshold; // 0x9C
        Uint32 SamplesPerCluster; // 0xA0
        Uint32 MaxCpuThreadCount; // 0xA4
        Uint32 TerrainProbeRes; // 0xA8
        Uint32 EnvironmentQuality; // 0xAC
        Int32 DefaultProbePriority; // 0xB0
        Render::EnlightenTransparencyMode TransparencyMode; // 0xB4
        Boolean DynamicEnable; // 0xB8
        Boolean LoadDebugData; // 0xB9
        Boolean DynamicGen4aEnable; // 0xBA
        Boolean DynamicGen4bEnable; // 0xBB
        Boolean DynamicWin32Enable; // 0xBC
        Boolean DynamicAndroidEnable; // 0xBD
        Boolean DynamiciOSEnable; // 0xBE
        Boolean DynamicOSXEnable; // 0xBF
        Boolean DirectionalIrradianceRgbEnable; // 0xC0
        Boolean GridBasedSystemGeneration; // 0xC1
        Boolean VoxelBasedLeafClustering; // 0xC2
        Boolean PixelStitchingEnable; // 0xC3
        Boolean EdgeStitchingEnable; // 0xC4
        Boolean AlignedEdgeStitchingEnable; // 0xC5
        Boolean AlignResolutionToPow2Enable; // 0xC6
        Boolean TerrainEnable; // 0xC7
        Boolean AmbientOcclusionTextureCompressionEnable; // 0xC8
        char pad_0xC9[0x7];
    }; // 0xD0
    static_assert(sizeof(EnlightenDataAsset) == 0xD0);
}
#pragma pack(pop)