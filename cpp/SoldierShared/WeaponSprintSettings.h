// Object: WeaponSprintSettings
// ClassId: 5697
// RuntimeId: 4001
// TypeInfo: 0x0000000144F44630
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class WeaponSprintSettings : public Core::DataContainer {
        Float32 SprintRecoverTimeMultiplier; // 0x18
        Float32 SprintToProneRecoverTimeMultiplier; // 0x1C
        Float32 SprintRecoverZoomThreshold; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(WeaponSprintSettings) == 0x28);
}
#pragma pack(pop)