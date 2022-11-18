// Object: LocalPlayerEventEntityData
// ClassId: 2839
// RuntimeId: 24913
// TypeInfo: 0x0000000144E76440
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 8)
namespace GameShared {
    class LocalPlayerEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Core::LocalPlayerId LocalPlayerId; // 0x24
        Boolean AllLocalPlayers; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(LocalPlayerEventEntityData) == 0x30);
}
#pragma pack(pop)