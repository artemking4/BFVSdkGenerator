// Object: ClientAimInputEntity
// ClassId: 6310
// RuntimeId: 32114
// TypeInfo: 0x0000000144DDD830
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAimInputEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientAimInputEntity) == 0x50);
}