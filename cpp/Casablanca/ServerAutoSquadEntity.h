// Object: ServerAutoSquadEntity
// ClassId: 7446
// RuntimeId: 37722
// TypeInfo: 0x0000000144C62460
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAutoSquadEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAutoSquadEntity) == 0x30);
}