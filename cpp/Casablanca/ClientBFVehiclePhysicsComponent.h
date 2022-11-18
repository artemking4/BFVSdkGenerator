// Object: ClientBFVehiclePhysicsComponent
// ClassId: 6130
// RuntimeId: 10236
// TypeInfo: 0x0000000144C46150
#include "../GameClient/ClientVehiclePhysicsComponent.h"

namespace Casablanca {
    class ClientBFVehiclePhysicsComponent : public GameClient::ClientVehiclePhysicsComponent {
        char pad_0xD0[0x48];
    }; // 0x118
    static_assert(sizeof(ClientBFVehiclePhysicsComponent) == 0x118);
}