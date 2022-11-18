// Object: ServerKillSwitchEntity
// ClassId: 7585
// RuntimeId: 64509
// TypeInfo: 0x0000000144C3E970
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerKillSwitchEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerKillSwitchEntity) == 0x48);
}