// Object: ServerGrenadePhysicsComponent
// ClassId: 6135
// RuntimeId: 55513
// TypeInfo: 0x0000000144F32610
#include "../Physics/PartPhysicsComponent.h"

namespace Soldier {
    class ServerGrenadePhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ServerGrenadePhysicsComponent) == 0xB0);
}