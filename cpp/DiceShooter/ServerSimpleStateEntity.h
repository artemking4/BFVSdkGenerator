// Object: ServerSimpleStateEntity
// ClassId: 7711
// RuntimeId: 37661
// TypeInfo: 0x0000000144DD25D0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerSimpleStateEntity : public Entity::Entity {
        char pad_0x20[0x260];
    }; // 0x280
    static_assert(sizeof(ServerSimpleStateEntity) == 0x280);
}