// Object: ServerPlayerAbilitySetComponent
// ClassId: 6022
// RuntimeId: 4634
// TypeInfo: 0x0000000144DE17C0
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerPlayerAbilitySetComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x1688];
    }; // 0x16C0
    static_assert(sizeof(ServerPlayerAbilitySetComponent) == 0x16C0);
}