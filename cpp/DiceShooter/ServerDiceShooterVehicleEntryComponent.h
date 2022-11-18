// Object: ServerDiceShooterVehicleEntryComponent
// ClassId: 5995
// RuntimeId: 61754
// TypeInfo: 0x0000000144DCBA60
#include "../GameServer/ServerVehicleEntryComponent.h"

namespace DiceShooter {
    class ServerDiceShooterVehicleEntryComponent : public GameServer::ServerVehicleEntryComponent {
        char pad_0x190[0x50];
    }; // 0x1E0
    static_assert(sizeof(ServerDiceShooterVehicleEntryComponent) == 0x1E0);
}