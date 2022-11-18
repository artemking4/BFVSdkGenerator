// Object: ServerGhostEntityOwnerWrapperEntity
// ClassId: 7569
// RuntimeId: 2519
// TypeInfo: 0x0000000144E58480
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerGhostEntityOwnerWrapperEntity : public Entity::Entity {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ServerGhostEntityOwnerWrapperEntity) == 0x28);
}