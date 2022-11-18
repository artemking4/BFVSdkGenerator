// Object: ServerCoopStartPointEntity
// ClassId: 7474
// RuntimeId: 19915
// TypeInfo: 0x0000000144CE7A70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerCoopStartPointEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerCoopStartPointEntity) == 0x40);
}