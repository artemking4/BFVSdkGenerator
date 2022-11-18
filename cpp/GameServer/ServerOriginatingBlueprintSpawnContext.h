// Object: ServerOriginatingBlueprintSpawnContext
// ClassId: 8729
// RuntimeId: 6866
// TypeInfo: 0x0000000144E60320
#include "../GameCommon/UserSpawnContext.h"

namespace GameServer {
    class ServerOriginatingBlueprintSpawnContext : public GameCommon::UserSpawnContext {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(ServerOriginatingBlueprintSpawnContext) == 0x18);
}