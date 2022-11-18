// Object: ServerDoorEntity
// ClassId: 7527
// RuntimeId: 52450
// TypeInfo: 0x0000000144C3BDA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDoorEntity : public Entity::Entity {
        char pad_0x20[0x1C0];
    }; // 0x1E0
    static_assert(sizeof(ServerDoorEntity) == 0x1E0);
}