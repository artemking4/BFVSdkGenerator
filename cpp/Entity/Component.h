// Object: Component
// ClassId: 5746
// RuntimeId: 26882
// TypeInfo: 0x0000000144EDC170
#include "../Entity/EntityBusPeer.h"

namespace Entity {
    class Component : public Entity::EntityBusPeer {
        char pad_0x8[0x18];
    }; // 0x20
    static_assert(sizeof(Component) == 0x20);
}