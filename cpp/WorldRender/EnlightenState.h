// Object: EnlightenState
// ClassId: 1557
// RuntimeId: 23783
// TypeInfo: 0x0000000144EB99E0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldRender {
    class EnlightenState : public Core::DataContainer {
        Float32 BounceScale; // 0x18
        Float32 SunScale; // 0x1C
        Core::Vec3 SkyBoxSkyColor; // 0x20
        Core::Vec3 SkyBoxGroundColor; // 0x30
        Core::Vec3 SkyBoxSunLightColor; // 0x40
        Core::Vec3 SkyBoxBackLightColor; // 0x50
        Float32 OutputScale; // 0x60
        Float32 SkyBoxSunLightColorSize; // 0x64
        Float32 SkyBoxBackLightColorSize; // 0x68
        Float32 SkyBoxBackLightRotationX; // 0x6C
        Float32 SkyBoxBackLightRotationY; // 0x70
        Boolean SkyBoxEnable; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(EnlightenState) == 0x80);
}
#pragma pack(pop)