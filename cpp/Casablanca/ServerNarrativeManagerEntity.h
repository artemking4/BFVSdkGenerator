// Object: ServerNarrativeManagerEntity
// ClassId: 7605
// RuntimeId: 14206
// TypeInfo: 0x0000000144C62F00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerNarrativeManagerEntity : public Entity::Entity {
        char pad_0x20[0x120];
    }; // 0x140
    static_assert(sizeof(ServerNarrativeManagerEntity) == 0x140);
}