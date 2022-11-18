// Object: ClientBFVehicleCollisionSphereComponent
// ClassId: 5789
// RuntimeId: 44808
// TypeInfo: 0x0000000144C46250
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientBFVehicleCollisionSphereComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientBFVehicleCollisionSphereComponent) == 0x40);
}