// Object: ContinuousRandomFloatEntity
// ClassId: 7093
// RuntimeId: 50939
// TypeInfo: 0x0000000144DDCA60
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ContinuousRandomFloatEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ContinuousRandomFloatEntity) == 0xE0);
}