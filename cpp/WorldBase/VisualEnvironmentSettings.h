// Object: VisualEnvironmentSettings
// ClassId: 5567
// RuntimeId: 37810
// TypeInfo: 0x0000000144EB4EA0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldBase {
    class VisualEnvironmentSettings : public Core::DataContainer {
        Float32 SunRotationX; // 0x18
        Float32 SunRotationY; // 0x1C
        Float32 SkyRotationPhi; // 0x20
        Int32 DrawStats; // 0x24
        Boolean DrawOnlyVisibleStats; // 0x28
        Boolean HdrGradingEnable; // 0x29
        Boolean DrawEmitterParams; // 0x2A
        Boolean DefaultLightmapWorkaroundEnable; // 0x2B
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(VisualEnvironmentSettings) == 0x30);
}
#pragma pack(pop)