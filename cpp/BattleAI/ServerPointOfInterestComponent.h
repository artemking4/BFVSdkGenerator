// Object: ServerPointOfInterestComponent
// ClassId: 6024
// RuntimeId: 17848
// TypeInfo: 0x0000000144BFBDE0
#include "../GameServer/ServerGameComponent.h"

namespace BattleAI {
    class ServerPointOfInterestComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0x28];
    }; // 0x60
    static_assert(sizeof(ServerPointOfInterestComponent) == 0x60);
}