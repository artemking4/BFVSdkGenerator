// Object: PlayerAbilityPropertyOutputEntityData
// ClassId: 3012
// RuntimeId: 58404
// TypeInfo: 0x0000000144DF84C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityPropertyOutputEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 PlayerAbilityIdentifier; // 0x24
    }; // 0x28
    static_assert(sizeof(PlayerAbilityPropertyOutputEntityData) == 0x28);
}
#pragma pack(pop)