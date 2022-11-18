// Object: PbrReflectionVolumeEntityData
// ClassId: 3429
// RuntimeId: 55260
// TypeInfo: 0x0000000144EC23C0
#include "../Entity/SpatialEntityData.h"
#include "../RenderBase/LocalIBLMode.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrReflectionVolumeEntityData : public Entity::SpatialEntityData {
        RenderBase::LocalIBLMode Mode; // 0x60
        Float32 CaptureDistance; // 0x64
        Float32 CaptureFadeDistance; // 0x68
        Float32 InfluenceExpandDistance; // 0x6C
        Float32 InfluenceFadeDistance; // 0x70
        Float32 SharpenSkyVisibility; // 0x74
        Float32 BiasSkyVisibility; // 0x78
        char pad_0x7C[0x4];
        RenderBase::TextureBaseAsset BakedTexture; // 0x80
        Boolean Enabled; // 0x88
        Boolean UpdateWhenMoving; // 0x89
        Boolean CaptureSky; // 0x8A
        Boolean CaptureSkyMask; // 0x8B
        Boolean UseSkyVisibilityAsAO; // 0x8C
        Boolean UseProxyReprojection; // 0x8D
        Boolean UseSkyVisibilityAsMask; // 0x8E
        Boolean DoNotUpdateBakedTexture; // 0x8F
    }; // 0x90
    static_assert(sizeof(PbrReflectionVolumeEntityData) == 0x90);
}
#pragma pack(pop)