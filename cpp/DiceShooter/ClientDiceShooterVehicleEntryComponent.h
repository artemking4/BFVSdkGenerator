// Object: ClientDiceShooterVehicleEntryComponent
// ClassId: 5829
// RuntimeId: 4991
// TypeInfo: 0x0000000144DCBB60
#include "../GameClient/ClientVehicleEntryComponent.h"

namespace DiceShooter {
    class ClientDiceShooterVehicleEntryComponent : public GameClient::ClientVehicleEntryComponent {
        char pad_0xDD0[0x100];
    }; // 0xED0
    static_assert(sizeof(ClientDiceShooterVehicleEntryComponent) == 0xED0);
}