// Object: StateNodeEntityBase
// ClassId: 8069
// RuntimeId: 26875
// TypeInfo: 0x0000000144F6A120
#include "../Entity/Entity.h"

namespace UIIncubator {
    class StateNodeEntityBase : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(StateNodeEntityBase) == 0x88);
}