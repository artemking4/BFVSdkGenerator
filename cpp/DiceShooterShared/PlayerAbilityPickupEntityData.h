// Object: PlayerAbilityPickupEntityData
// ClassId: 3011
// RuntimeId: 14677
// TypeInfo: 0x0000000144DF82C0
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPickupEntityData : public Entity::EntityData {
        Uint32 PlayerAbilityIdentifier; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPickupEntityData) == 0x28);
}
#pragma pack(pop)