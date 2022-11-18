// Object: PropertyReaderPhysicsActionEntity
// ClassId: 7333
// RuntimeId: 31279
// TypeInfo: 0x0000000144DDF2F0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class PropertyReaderPhysicsActionEntity : public Entity::Entity {
        char pad_0x20[0xE0];
    }; // 0x100
    static_assert(sizeof(PropertyReaderPhysicsActionEntity) == 0x100);
}