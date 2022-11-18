// Object: ServerOriginatingLocationSpawnContext
// ClassId: 8730
// RuntimeId: 14110
// TypeInfo: 0x0000000144E602A0
#include "../GameCommon/UserSpawnContext.h"

namespace GameServer {
    class ServerOriginatingLocationSpawnContext : public GameCommon::UserSpawnContext {
        char pad_0x10[0x50];
    }; // 0x60
    static_assert(sizeof(ServerOriginatingLocationSpawnContext) == 0x60);
}