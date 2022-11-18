// Object: PlayerAbilityAssetGroup
// ClassId: 382
// RuntimeId: 10650
// TypeInfo: 0x0000000144DF8B40
#include "../DiceShooterShared/PlayerAbilityAssetBase.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityAssetGroup : public DiceShooterShared::PlayerAbilityAssetBase {
        Array<DiceShooterShared::PlayerAbilityAssetBase> Abilities; // 0x20
    }; // 0x28
    static_assert(sizeof(PlayerAbilityAssetGroup) == 0x28);
}
#pragma pack(pop)