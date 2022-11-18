// Object: ServerSwitchSoldierEntity
// ClassId: 7734
// RuntimeId: 3687
// TypeInfo: 0x0000000144C41120
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerSwitchSoldierEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerSwitchSoldierEntity) == 0x30);
}