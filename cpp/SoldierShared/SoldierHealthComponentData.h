// Object: SoldierHealthComponentData
// ClassId: 1931
// RuntimeId: 26275
// TypeInfo: 0x0000000144F44DB0
#include "../GameShared/CharacterHealthComponentData.h"
#include "../Global/Float32.h"
#include "../SoldierShared/DamageEntryData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierHealthComponentData : public GameShared::CharacterHealthComponentData {
        Float32 UnderWaterHoldBreathTime; // 0x90
        Float32 UnderWaterBreathRegenerationTime; // 0x94
        Array<SoldierShared::DamageEntryData> UnderWaterDamageTable; // 0x98
        Float32 UnderWaterClearSpottingTime; // 0xA0
        char pad_0xA4[0xC];
    }; // 0xB0
    static_assert(sizeof(SoldierHealthComponentData) == 0xB0);
}
#pragma pack(pop)