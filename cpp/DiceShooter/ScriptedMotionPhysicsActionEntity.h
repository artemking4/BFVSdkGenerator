// Object: ScriptedMotionPhysicsActionEntity
// ClassId: 7372
// RuntimeId: 53743
// TypeInfo: 0x0000000144DDE850
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ScriptedMotionPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ScriptedMotionPhysicsActionEntity) == 0xC0);
}