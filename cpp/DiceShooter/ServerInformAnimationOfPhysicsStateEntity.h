// Object: ServerInformAnimationOfPhysicsStateEntity
// ClassId: 7575
// RuntimeId: 15360
// TypeInfo: 0x0000000144DD1280
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerInformAnimationOfPhysicsStateEntity : public Entity::Entity {
        char pad_0x20[0xE10];
    }; // 0xE30
    static_assert(sizeof(ServerInformAnimationOfPhysicsStateEntity) == 0xE30);
}