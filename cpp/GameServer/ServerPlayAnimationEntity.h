// Object: ServerPlayAnimationEntity
// ClassId: 7658
// RuntimeId: 11779
// TypeInfo: 0x0000000144E5B530
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerPlayAnimationEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerPlayAnimationEntity) == 0x80);
}