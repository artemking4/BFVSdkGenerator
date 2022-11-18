// Object: PlayerAbilityModifier
// ClassId: 4427
// RuntimeId: 15177
// TypeInfo: 0x0000000144DF7E40
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityModifier : public Core::DataContainer {
        Uint32 RequiredUnlockId; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(PlayerAbilityModifier) == 0x20);
}
#pragma pack(pop)