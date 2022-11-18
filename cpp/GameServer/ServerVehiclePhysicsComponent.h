// Object: ServerVehiclePhysicsComponent
// ClassId: 6140
// RuntimeId: 63273
// TypeInfo: 0x0000000144E61E60
#include "../Physics/PartPhysicsComponent.h"

namespace GameServer {
    class ServerVehiclePhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x8];
    }; // 0xB0
    static_assert(sizeof(ServerVehiclePhysicsComponent) == 0xB0);
}