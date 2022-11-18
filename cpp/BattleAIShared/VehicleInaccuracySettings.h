// Object: VehicleInaccuracySettings
// ClassId: 5564
// RuntimeId: 40012
// TypeInfo: 0x0000000144C05E60
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class VehicleInaccuracySettings : public Core::DataContainer {
        Float32 MinAimAngle; // 0x18
        Float32 MaxAimAngle; // 0x1C
        Float32 AccuracyIncreaseSpeed; // 0x20
        Float32 AccuracyIncreasePerDamage; // 0x24
        Float32 AccuracyDecreaseSpeed; // 0x28
        Boolean ResetOnReTarget; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(VehicleInaccuracySettings) == 0x30);
}
#pragma pack(pop)