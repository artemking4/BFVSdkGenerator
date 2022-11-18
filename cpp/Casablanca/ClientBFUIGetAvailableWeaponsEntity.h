// Object: ClientBFUIGetAvailableWeaponsEntity
// ClassId: 6418
// RuntimeId: 24662
// TypeInfo: 0x0000000144CC6080
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableWeaponsEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientBFUIGetAvailableWeaponsEntity) == 0xB8);
}