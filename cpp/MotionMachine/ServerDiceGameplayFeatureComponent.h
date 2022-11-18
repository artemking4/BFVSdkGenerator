// Object: ServerDiceGameplayFeatureComponent
// ClassId: 5980
// RuntimeId: 22207
// TypeInfo: 0x0000000144EEE700
#include "../GameServer/ServerGameComponent.h"

namespace MotionMachine {
    class ServerDiceGameplayFeatureComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ServerDiceGameplayFeatureComponent) == 0x130);
}