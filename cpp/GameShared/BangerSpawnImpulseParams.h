// Object: BangerSpawnImpulseParams
// ClassId: 1271
// RuntimeId: 8146
// TypeInfo: 0x0000000144E82AC0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../GameShared/ForcedSpawnImpulseSettings.h"

#pragma pack(push, 16)
namespace GameShared {
    class BangerSpawnImpulseParams : public Core::DataContainer {
        Float32 MinHorizontalAngle; // 0x18
        Float32 MaxHorizontalAngle; // 0x1C
        Core::Vec3 MinRotationalVelocity; // 0x20
        Core::Vec3 MaxRotationalVelocity; // 0x30
        Float32 MinVerticalAngle; // 0x40
        Float32 MaxVerticalAngle; // 0x44
        Float32 MinStrength; // 0x48
        Float32 MaxStrength; // 0x4C
        Float32 WaterStrengthModifier; // 0x50
        char pad_0x54[0x4];
        GameShared::ForcedSpawnImpulseSettings ForcedSpawnImpulseSettings; // 0x58
    }; // 0x60
    static_assert(sizeof(BangerSpawnImpulseParams) == 0x60);
}
#pragma pack(pop)