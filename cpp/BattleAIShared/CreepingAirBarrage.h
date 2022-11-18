// Object: CreepingAirBarrage
// ClassId: 1476
// RuntimeId: 50118
// TypeInfo: 0x0000000144C074E0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class CreepingAirBarrage : public Core::DataContainer {
        Float32 StartDistance; // 0x18
        Float32 TimeToInterceptionPoint; // 0x1C
        Float32 TimeAtInterceptionPoint; // 0x20
        Float32 Cooldown; // 0x24
        Float32 AheadOfPlayerMultiplier; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(CreepingAirBarrage) == 0x30);
}
#pragma pack(pop)