// Object: ClientRemoteEntryComponent
// ClassId: 5830
// RuntimeId: 32829
// TypeInfo: 0x0000000144DCBAE0
#include "../DiceShooter/ClientDiceShooterVehicleEntryComponent.h"

namespace DiceShooter {
    class ClientRemoteEntryComponent : public DiceShooter::ClientDiceShooterVehicleEntryComponent {
        char pad_0xED0[0x10];
    }; // 0xEE0
    static_assert(sizeof(ClientRemoteEntryComponent) == 0xEE0);
}