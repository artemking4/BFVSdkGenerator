// Object: ClientAimEntity
// ClassId: 6309
// RuntimeId: 3090
// TypeInfo: 0x0000000144F2F060
#include "../Entity/Entity.h"

namespace Soldier {
    class ClientAimEntity : public Entity::Entity {
        char pad_0x20[0x520];
    }; // 0x540
    static_assert(sizeof(ClientAimEntity) == 0x540);
}