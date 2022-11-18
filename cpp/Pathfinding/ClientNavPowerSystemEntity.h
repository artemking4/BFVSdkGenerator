// Object: ClientNavPowerSystemEntity
// ClassId: 6759
// RuntimeId: 62189
// TypeInfo: 0x0000000144EA7930
#include "../Entity/Entity.h"

namespace Pathfinding {
    class ClientNavPowerSystemEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientNavPowerSystemEntity) == 0x40);
}