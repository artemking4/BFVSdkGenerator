// Object: DynamicMultiEventEntity
// ClassId: 7133
// RuntimeId: 25356
// TypeInfo: 0x0000000144DD9750
#include "../Entity/Entity.h"

namespace DiceShooter {
    class DynamicMultiEventEntity : public Entity::Entity {
        char pad_0x20[0x138];
    }; // 0x158
    static_assert(sizeof(DynamicMultiEventEntity) == 0x158);
}