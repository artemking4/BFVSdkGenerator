// Object: PhysicsComponent
// ClassId: 6102
// RuntimeId: 27725
// TypeInfo: 0x0000000144F12F80
#include "../Entity/Component.h"

namespace Physics {
    class PhysicsComponent : public Entity::Component {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(PhysicsComponent) == 0x68);
}