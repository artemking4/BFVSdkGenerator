// Object: ServerRemoteEntryComponent
// ClassId: 5996
// RuntimeId: 52536
// TypeInfo: 0x0000000144DCB9E0
#include "../DiceShooter/ServerDiceShooterVehicleEntryComponent.h"

namespace DiceShooter {
    class ServerRemoteEntryComponent : public DiceShooter::ServerDiceShooterVehicleEntryComponent {
        char pad_0x1E0[0x8];
    }; // 0x1E8
    static_assert(sizeof(ServerRemoteEntryComponent) == 0x1E8);
}