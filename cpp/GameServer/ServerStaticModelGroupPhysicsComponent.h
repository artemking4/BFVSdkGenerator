// Object: ServerStaticModelGroupPhysicsComponent
// ClassId: 6120
// RuntimeId: 47129
// TypeInfo: 0x0000000144E65160
#include "../Physics/GroupPhysicsComponent.h"

namespace GameServer {
    class ServerStaticModelGroupPhysicsComponent : public Physics::GroupPhysicsComponent {
        char pad_0xA0[0x8];
    }; // 0xA8
    static_assert(sizeof(ServerStaticModelGroupPhysicsComponent) == 0xA8);
}