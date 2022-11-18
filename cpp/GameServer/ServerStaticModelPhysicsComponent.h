// Object: ServerStaticModelPhysicsComponent
// ClassId: 6138
// RuntimeId: 20003
// TypeInfo: 0x0000000144E650E0
#include "../Physics/PartPhysicsComponent.h"

namespace GameServer {
    class ServerStaticModelPhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ServerStaticModelPhysicsComponent) == 0xB0);
}