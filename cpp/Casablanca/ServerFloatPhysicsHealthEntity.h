// Object: ServerFloatPhysicsHealthEntity
// ClassId: 7554
// RuntimeId: 1588
// TypeInfo: 0x0000000144C3EFD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerFloatPhysicsHealthEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerFloatPhysicsHealthEntity) == 0x30);
}