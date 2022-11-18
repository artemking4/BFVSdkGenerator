// Object: ServerTransformQueryEntity
// ClassId: 7759
// RuntimeId: 52296
// TypeInfo: 0x0000000144DD22A0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerTransformQueryEntity : public Entity::Entity {
        char pad_0x20[0xF0];
    }; // 0x110
    static_assert(sizeof(ServerTransformQueryEntity) == 0x110);
}