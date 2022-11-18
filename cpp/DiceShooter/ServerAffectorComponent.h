// Object: ServerAffectorComponent
// ClassId: 5942
// RuntimeId: 38065
// TypeInfo: 0x0000000144DD6320
#include "../GameServer/ServerGameComponent.h"

namespace DiceShooter {
    class ServerAffectorComponent : public GameServer::ServerGameComponent {
        char pad_0x38[0xC38];
    }; // 0xC70
    static_assert(sizeof(ServerAffectorComponent) == 0xC70);
}