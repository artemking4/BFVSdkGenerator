// Object: ClientMissilePhysicsComponent
// ClassId: 6125
// RuntimeId: 37979
// TypeInfo: 0x0000000144F75D60
#include "../Physics/PartPhysicsComponent.h"

namespace Weapon {
    class ClientMissilePhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x20];
    }; // 0xC8
    static_assert(sizeof(ClientMissilePhysicsComponent) == 0xC8);
}