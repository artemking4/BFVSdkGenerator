// Object: ClientBFUIReinforcementFilterEntity
// ClassId: 6557
// RuntimeId: 13780
// TypeInfo: 0x0000000144CA6030
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIReinforcementFilterEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientBFUIReinforcementFilterEntity) == 0x60);
}