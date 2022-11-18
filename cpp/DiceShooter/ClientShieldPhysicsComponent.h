// Object: ClientShieldPhysicsComponent
// ClassId: 6126
// RuntimeId: 9369
// TypeInfo: 0x0000000144DCF270
#include "../Physics/PartPhysicsComponent.h"

namespace DiceShooter {
    class ClientShieldPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x20];
    }; // 0xC8
    static_assert(sizeof(ClientShieldPhysicsComponent) == 0xC8);
}