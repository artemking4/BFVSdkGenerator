// Object: ServerAwardStartTrackingEntity
// ClassId: 7448
// RuntimeId: 46390
// TypeInfo: 0x0000000144CE5230
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAwardStartTrackingEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerAwardStartTrackingEntity) == 0x38);
}