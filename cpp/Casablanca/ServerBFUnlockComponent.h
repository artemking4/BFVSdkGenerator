// Object: ServerBFUnlockComponent
// ClassId: 6052
// RuntimeId: 29749
// TypeInfo: 0x0000000144CDB410
#include "../GameServer/ServerUnlockComponent.h"

namespace Casablanca {
    class ServerBFUnlockComponent : public GameServer::ServerUnlockComponent {
        char pad_0xB8[0x20];
    }; // 0xD8
    static_assert(sizeof(ServerBFUnlockComponent) == 0xD8);
}