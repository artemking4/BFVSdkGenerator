// Object: ServerTeamPointTrackerEntity
// ClassId: 7748
// RuntimeId: 21996
// TypeInfo: 0x0000000144CE1F00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerTeamPointTrackerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerTeamPointTrackerEntity) == 0x70);
}