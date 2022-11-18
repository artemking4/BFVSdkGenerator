// Object: ClientControlInputEntity
// ClassId: 6645
// RuntimeId: 10486
// TypeInfo: 0x0000000144DDD610
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientControlInputEntity : public Entity::Entity {
        char pad_0x20[0x100];
    }; // 0x120
    static_assert(sizeof(ClientControlInputEntity) == 0x120);
}