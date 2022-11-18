// Object: ClientValueMatchEntity
// ClassId: 7028
// RuntimeId: 64401
// TypeInfo: 0x0000000144DAEC60
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientValueMatchEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientValueMatchEntity) == 0xD0);
}