// Object: ClientDakarReinforcementEntity
// ClassId: 6656
// RuntimeId: 2212
// TypeInfo: 0x0000000144C88A30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDakarReinforcementEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientDakarReinforcementEntity) == 0x40);
}