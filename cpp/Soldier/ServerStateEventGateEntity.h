// Object: ServerStateEventGateEntity
// ClassId: 7733
// RuntimeId: 49597
// TypeInfo: 0x0000000144F30740
#include "../Entity/Entity.h"

namespace Soldier {
    class ServerStateEventGateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerStateEventGateEntity) == 0x30);
}