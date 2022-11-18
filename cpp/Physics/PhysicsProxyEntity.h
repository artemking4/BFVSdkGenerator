// Object: PhysicsProxyEntity
// ClassId: 7979
// RuntimeId: 63729
// TypeInfo: 0x0000000144F13A30
#include "../Entity/ComponentEntity.h"

namespace Physics {
    class PhysicsProxyEntity : public Entity::ComponentEntity {
        char pad_0xE8[0x28];
    }; // 0x110
    static_assert(sizeof(PhysicsProxyEntity) == 0x110);
}