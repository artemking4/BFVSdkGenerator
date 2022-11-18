// Object: FloatStateActionEntity
// ClassId: 7180
// RuntimeId: 21935
// TypeInfo: 0x0000000144DDEB80
#include "../Entity/Entity.h"

namespace DiceShooter {
    class FloatStateActionEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(FloatStateActionEntity) == 0x50);
}