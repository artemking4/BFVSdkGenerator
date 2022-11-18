// Object: ServerAimTransformQueryEntity
// ClassId: 7436
// RuntimeId: 24362
// TypeInfo: 0x0000000144DD33A0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerAimTransformQueryEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerAimTransformQueryEntity) == 0x70);
}