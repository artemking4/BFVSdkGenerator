// Object: PlayerAbilitySpatialPickupEntityData
// ClassId: 3336
// RuntimeId: 11555
// TypeInfo: 0x0000000144DF8240
#include "../Entity/GameComponentEntityData.h"
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PlayerAbilitySpatialPickupEntityData : public Entity::GameComponentEntityData {
        Core::Asset Mesh; // 0x90
        Uint32 AttachedPlayerAbilityIdentifier; // 0x98
        Boolean AllowPickupSwitching; // 0x9C
        Boolean StoreState; // 0x9D
        Boolean ResetStoredStateOnPickup; // 0x9E
        Boolean StoreWeaponState; // 0x9F
    }; // 0xA0
    static_assert(sizeof(PlayerAbilitySpatialPickupEntityData) == 0xA0);
}
#pragma pack(pop)