// Object: ClientBFUISlotEquippedSoldierEntity
// ClassId: 6570
// RuntimeId: 16502
// TypeInfo: 0x0000000144CC8A80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISlotEquippedSoldierEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUISlotEquippedSoldierEntity) == 0x68);
}