// Object: ServerPlayerFilterEntity
// ClassId: 7668
// RuntimeId: 61579
// TypeInfo: 0x0000000144E60E40
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerPlayerFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerPlayerFilterEntity) == 0x30);
}