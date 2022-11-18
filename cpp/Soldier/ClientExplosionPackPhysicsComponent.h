// Object: ClientExplosionPackPhysicsComponent
// ClassId: 6124
// RuntimeId: 27478
// TypeInfo: 0x0000000144F33CE0
#include "../Physics/PartPhysicsComponent.h"

namespace Soldier {
    class ClientExplosionPackPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x28];
    }; // 0xD0
    static_assert(sizeof(ClientExplosionPackPhysicsComponent) == 0xD0);
}