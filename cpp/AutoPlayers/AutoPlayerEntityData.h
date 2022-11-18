// Object: AutoPlayerEntityData
// ClassId: 2076
// RuntimeId: 6073
// TypeInfo: 0x0000000144BEC910
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace AutoPlayers {
    class AutoPlayerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean AutoStart; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AutoPlayerEntityData) == 0x28);
}
#pragma pack(pop)