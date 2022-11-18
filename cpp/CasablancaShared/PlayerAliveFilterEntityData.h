// Object: PlayerAliveFilterEntityData
// ClassId: 3015
// RuntimeId: 28344
// TypeInfo: 0x0000000144D5BFE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerAliveFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PlayerAliveFilterEntityData) == 0x28);
}
#pragma pack(pop)