// Object: ServerPlaceHolderEntity
// ClassId: 7657
// RuntimeId: 61490
// TypeInfo: 0x0000000144E58BF0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerPlaceHolderEntity : public Entity::Entity {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ServerPlaceHolderEntity) == 0x28);
}