// Object: ServerAIVehicleAimingComponent
// ClassId: 5944
// RuntimeId: 59406
// TypeInfo: 0x0000000144BFBE60
#include "../DiceShooter/ServerAimInputComponent.h"

namespace BattleAI {
    class ServerAIVehicleAimingComponent : public DiceShooter::ServerAimInputComponent {
        char pad_0xB0[0x1F0];
    }; // 0x2A0
    static_assert(sizeof(ServerAIVehicleAimingComponent) == 0x2A0);
}