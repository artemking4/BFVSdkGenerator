// Object: ClientSimpleStateEntity
// ClassId: 6857
// RuntimeId: 27372
// TypeInfo: 0x0000000144DDA770
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientSimpleStateEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ClientSimpleStateEntity) == 0x280);
}