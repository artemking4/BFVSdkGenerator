// Object: ServerAssignPlayerToSquadEntity
// ClassId: 7445
// RuntimeId: 23177
// TypeInfo: 0x0000000144C602E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAssignPlayerToSquadEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAssignPlayerToSquadEntity) == 0x30);
}