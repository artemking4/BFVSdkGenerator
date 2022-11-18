// Object: ServerANTControlTrack
// ClassId: 8617
// RuntimeId: 54269
// TypeInfo: 0x0000000144E5E950
#include "../GameCommon/ANTControlTrack.h"

namespace GameServer {
    class ServerANTControlTrack : public GameCommon::ANTControlTrack {
        char pad_0x80[0x8];
    }; // 0x88
    static_assert(sizeof(ServerANTControlTrack) == 0x88);
}