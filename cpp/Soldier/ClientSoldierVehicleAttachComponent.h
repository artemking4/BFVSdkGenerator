// Object: ClientSoldierVehicleAttachComponent
// ClassId: 5890
// RuntimeId: 48683
// TypeInfo: 0x0000000144F340E0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientSoldierVehicleAttachComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x2C8];
    }; // 0x300
    static_assert(sizeof(ClientSoldierVehicleAttachComponent) == 0x300);
}