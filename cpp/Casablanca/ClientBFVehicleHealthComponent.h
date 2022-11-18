// Object: ClientBFVehicleHealthComponent
// ClassId: 6071
// RuntimeId: 36215
// TypeInfo: 0x0000000144C461D0
#include "../GameClient/ClientVehicleHealthComponent.h"

namespace Casablanca {
    class ClientBFVehicleHealthComponent : public GameClient::ClientVehicleHealthComponent {
        char pad_0xF8[0x68];
    }; // 0x160
    static_assert(sizeof(ClientBFVehicleHealthComponent) == 0x160);
}