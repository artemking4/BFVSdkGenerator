// Object: MultiPropertyGateEntity
// ClassId: 7266
// RuntimeId: 51412
// TypeInfo: 0x0000000144DB15C0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class MultiPropertyGateEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(MultiPropertyGateEntity) == 0x80);
}