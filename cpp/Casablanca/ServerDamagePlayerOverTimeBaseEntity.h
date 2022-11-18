// Object: ServerDamagePlayerOverTimeBaseEntity
// ClassId: 7499
// RuntimeId: 19621
// TypeInfo: 0x0000000144CE7850
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDamagePlayerOverTimeBaseEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerDamagePlayerOverTimeBaseEntity) == 0x48);
}