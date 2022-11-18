// Object: CoolDownGateEntity
// ClassId: 7095
// RuntimeId: 10807
// TypeInfo: 0x0000000144DAEA40
#include "../Entity/Entity.h"

namespace DiceCommons {
    class CoolDownGateEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(CoolDownGateEntity) == 0x38);
}