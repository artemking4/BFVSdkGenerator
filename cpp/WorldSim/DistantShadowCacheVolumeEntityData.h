// Object: DistantShadowCacheVolumeEntityData
// ClassId: 3264
// RuntimeId: 1468
// TypeInfo: 0x0000000144EC32C0
#include "../WorldSim/BakeableTextureEntityData.h"
#include "../RenderBase/ShadowCacheMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class DistantShadowCacheVolumeEntityData : public WorldSim::BakeableTextureEntityData {
        RenderBase::ShadowCacheMode Mode; // 0x70
        Uint32 Resolution; // 0x74
        Uint32 TilesPerSide; // 0x78
        Int32 DepthBias; // 0x7C
        Float32 DepthBiasSlope; // 0x80
        Uint32 RefreshCounter; // 0x84
        Boolean DoubleBuffer; // 0x88
        Boolean InitializeUsingBakedTexture; // 0x89
        Boolean Enabled; // 0x8A
        Boolean OverrideDepthBias; // 0x8B
        Boolean InvertTerrainCulling; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(DistantShadowCacheVolumeEntityData) == 0x90);
}
#pragma pack(pop)