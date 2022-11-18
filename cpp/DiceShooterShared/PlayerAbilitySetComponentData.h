// Object: PlayerAbilitySetComponentData
// ClassId: 1822
// RuntimeId: 4064
// TypeInfo: 0x0000000144DF8CC0
#include "../Entity/GameComponentData.h"
#include "../DiceShooterShared/PlayerAbilityEntryInputContainer.h"
#include "../DiceShooterShared/PlayerAbilitySetCategoryModifier.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/AbilitySetDynamicModifierData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PlayerAbilitySetComponentData : public Entity::GameComponentData {
        Array<DiceShooterShared::PlayerAbilityEntryInputContainer> EntryInputActionMap; // 0x80
        Array<DiceShooterShared::PlayerAbilitySetCategoryModifier> Modifiers; // 0x88
        Int32 InputQueueSize; // 0x90
        Float32 InputQueueTimeout; // 0x94
        DiceShooterShared::AbilitySetDynamicModifierData AbilitySetData; // 0x98
        Boolean DetachPlayerOnDeath; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(PlayerAbilitySetComponentData) == 0xB0);
}
#pragma pack(pop)