// Object: PlayerEventToQueryResultEntityData
// ClassId: 3023
// RuntimeId: 16153
// TypeInfo: 0x0000000144DED0A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityFilter.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PlayerEventToQueryResultEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::QueryEntityFilter FilteredTypes; // 0x24
        DiceShooterShared::QueryEntityFilter DefaultFilteredTypes; // 0x28
        Boolean ResetOnEvent; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PlayerEventToQueryResultEntityData) == 0x30);
}
#pragma pack(pop)