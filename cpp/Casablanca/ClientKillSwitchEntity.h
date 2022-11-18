// Object: ClientKillSwitchEntity
// ClassId: 6736
// RuntimeId: 10611
// TypeInfo: 0x0000000144CD1450
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientKillSwitchEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientKillSwitchEntity) == 0x48);
}