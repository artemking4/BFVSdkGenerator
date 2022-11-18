// Object: LinkedAbilityReferenceEntityData
// ClassId: 3952
// RuntimeId: 4547
// TypeInfo: 0x0000000144DF8E40
#include "../Entity/LogicReferenceObjectData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class LinkedAbilityReferenceEntityData : public Entity::LogicReferenceObjectData {
        Uint32 PlayerAbilityIdentifier; // 0xC0
        Boolean AutoCreateAbility; // 0xC4
        char pad_0xC5[0xB];
    }; // 0xD0
    static_assert(sizeof(LinkedAbilityReferenceEntityData) == 0xD0);
}
#pragma pack(pop)