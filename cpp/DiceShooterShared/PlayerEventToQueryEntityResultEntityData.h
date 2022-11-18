// Object: PlayerEventToQueryEntityResultEntityData
// ClassId: 3022
// RuntimeId: 50397
// TypeInfo: 0x0000000144DF0B50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityFilter.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerEventToQueryEntityResultEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter OutputFilterType; // 0x24
        DiceShooterShared::QueryEntityFilter SecondaryOutputFilterType; // 0x28
        Boolean UseSecondaryOutputFilterType; // 0x2C
        Boolean FilterOutDeadControllables; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(PlayerEventToQueryEntityResultEntityData) == 0x30);
}
#pragma pack(pop)