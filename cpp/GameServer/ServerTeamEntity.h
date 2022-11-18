// Object: ServerTeamEntity
// ClassId: 7746
// RuntimeId: 14755
// TypeInfo: 0x0000000144E605C0
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerTeamEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ServerTeamEntity) == 0x60);
}