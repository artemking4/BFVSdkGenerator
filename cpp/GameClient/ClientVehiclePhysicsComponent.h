// Object: ClientVehiclePhysicsComponent
// ClassId: 6129
// RuntimeId: 792
// TypeInfo: 0x0000000144E43F00
#include "../Physics/PartPhysicsComponent.h"

namespace GameClient {
    class ClientVehiclePhysicsComponent : public Physics::PartPhysicsComponent {
        char pad_0xA8[0x28];
    }; // 0xD0
    static_assert(sizeof(ClientVehiclePhysicsComponent) == 0xD0);
}