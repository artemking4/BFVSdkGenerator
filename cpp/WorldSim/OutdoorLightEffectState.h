// Object: OutdoorLightEffectState
// ClassId: 4397
// RuntimeId: 23347
// TypeInfo: 0x0000000144EC0F40
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Render/TextureAsset.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace WorldSim {
    class OutdoorLightEffectState : public Core::DataContainer {
        Float32 SunRotationX; // 0x18
        Float32 SunRotationY; // 0x1C
        Core::Vec3 SunColor; // 0x20
        Core::Vec3 SkyColor; // 0x30
        Core::Vec3 GroundColor; // 0x40
        Float32 SkyLightAngleFactor; // 0x50
        Float32 SunShadowHeightScale; // 0x54
        Render::TextureAsset CloudShadowTexture; // 0x58
        Core::Vec2 CloudShadowSpeed; // 0x60
        Float32 CloudShadowSize; // 0x68
        Float32 CloudShadowCoverage; // 0x6C
        Float32 CloudShadowExponent; // 0x70
        Boolean Enable; // 0x74
        Boolean CloudShadowEnable; // 0x75
        char pad_0x76[0xA];
    }; // 0x80
    static_assert(sizeof(OutdoorLightEffectState) == 0x80);
}
#pragma pack(pop)