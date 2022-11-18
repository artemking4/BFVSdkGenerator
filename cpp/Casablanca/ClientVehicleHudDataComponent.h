// Object: ClientVehicleHudDataComponent
// ClassId: 5910
// RuntimeId: 31068
// TypeInfo: 0x0000000144CCFB60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientVehicleHudDataComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ClientVehicleHudDataComponent) == 0x68);
}