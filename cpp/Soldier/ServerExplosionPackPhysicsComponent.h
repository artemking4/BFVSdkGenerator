// Object: ServerExplosionPackPhysicsComponent
// ClassId: 6134
// RuntimeId: 34751
// TypeInfo: 0x0000000144F32690
#include "../Physics/PartPhysicsComponent.h"

namespace Soldier {
    class ServerExplosionPackPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ServerExplosionPackPhysicsComponent) == 0xB0);
}