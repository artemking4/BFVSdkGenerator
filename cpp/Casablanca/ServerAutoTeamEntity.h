// Object: ServerAutoTeamEntity
// ClassId: 7447
// RuntimeId: 49970
// TypeInfo: 0x0000000144C62350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerAutoTeamEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerAutoTeamEntity) == 0x40);
}