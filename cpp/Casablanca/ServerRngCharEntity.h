// Object: ServerRngCharEntity
// ClassId: 7700
// RuntimeId: 59221
// TypeInfo: 0x0000000144CE7520
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerRngCharEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerRngCharEntity) == 0x38);
}