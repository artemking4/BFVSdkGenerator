// Object: TargetCyclingEntity
// ClassId: 8084
// RuntimeId: 19953
// TypeInfo: 0x0000000144DDDA50
#include "../Entity/Entity.h"

namespace DiceShooter {
    class TargetCyclingEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(TargetCyclingEntity) == 0x100);
}