// Object: ServerTeamFilterEntity
// ClassId: 7747
// RuntimeId: 40491
// TypeInfo: 0x0000000144E604B0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTeamFilterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerTeamFilterEntity) == 0x30);
}