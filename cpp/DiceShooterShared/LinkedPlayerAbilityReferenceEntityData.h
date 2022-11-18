// Object: LinkedPlayerAbilityReferenceEntityData
// ClassId: 3955
// RuntimeId: 63158
// TypeInfo: 0x0000000144DF8DC0
#include "../DiceShooterShared/PlayerAbilityReferenceData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class LinkedPlayerAbilityReferenceEntityData : public DiceShooterShared::PlayerAbilityReferenceData {
        Array<Uint32> LinkedAbilityIDs; // 0xD0
        char pad_0xD8[0x8];
    }; // 0xE0
    static_assert(sizeof(LinkedPlayerAbilityReferenceEntityData) == 0xE0);
}
#pragma pack(pop)