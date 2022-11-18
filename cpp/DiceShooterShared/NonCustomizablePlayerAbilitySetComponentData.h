// Object: NonCustomizablePlayerAbilitySetComponentData
// ClassId: 1823
// RuntimeId: 48307
// TypeInfo: 0x0000000144DF8C40
#include "../DiceShooterShared/PlayerAbilitySetComponentData.h"
#include "../DiceShooterShared/PlayerAbilityAsset.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class NonCustomizablePlayerAbilitySetComponentData : public DiceShooterShared::PlayerAbilitySetComponentData {
        Array<DiceShooterShared::PlayerAbilityAsset> Abilities; // 0xB0
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(NonCustomizablePlayerAbilitySetComponentData) == 0xC0);
}
#pragma pack(pop)