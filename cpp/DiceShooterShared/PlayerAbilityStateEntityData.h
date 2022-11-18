// Object: PlayerAbilityStateEntityData
// ClassId: 3013
// RuntimeId: 47843
// TypeInfo: 0x0000000144DF8440
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerAbilityStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 PlayerAbilityIdentifier; // 0x24
        Boolean TrackOwnersPlayer; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(PlayerAbilityStateEntityData) == 0x30);
}
#pragma pack(pop)