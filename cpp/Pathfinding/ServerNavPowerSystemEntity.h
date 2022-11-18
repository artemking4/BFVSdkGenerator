// Object: ServerNavPowerSystemEntity
// ClassId: 7606
// RuntimeId: 28354
// TypeInfo: 0x0000000144EA7600
#include "../Entity/Entity.h"

namespace Pathfinding {
    class ServerNavPowerSystemEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerNavPowerSystemEntity) == 0x40);
}