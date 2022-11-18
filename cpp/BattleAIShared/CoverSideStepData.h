// Object: CoverSideStepData
// ClassId: 232
// RuntimeId: 55917
// TypeInfo: 0x0000000144C06060
#include "../Core/Asset.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CoverSideStepData : public Core::Asset {
        Int32 ShotAtStepChance; // 0x20
        Int32 AimAtStepChance; // 0x24
        Float32 AimAtStepInterval; // 0x28
        Int32 IdleStepChance; // 0x2C
        Float32 IdleStepInterval; // 0x30
        Float32 SideStepGrenadeCooldown; // 0x34
        Float32 SideStepInitialCooldown; // 0x38
        Float32 SideStepCooldown; // 0x3C
        Int32 SideStepAngleThreshold; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(CoverSideStepData) == 0x48);
}
#pragma pack(pop)