// Object: ServerAnimationEnumerationEntity
// ClassId: 7440
// RuntimeId: 56456
// TypeInfo: 0x0000000144E5E6B0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerAnimationEnumerationEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerAnimationEnumerationEntity) == 0x68);
}