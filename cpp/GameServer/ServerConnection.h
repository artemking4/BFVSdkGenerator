// Object: ServerConnection
// ClassId: 5740
// RuntimeId: 55581
// TypeInfo: 0x0000000144E63480
#include "../Network/EngineConnectionPeer.h"

#pragma pack(push, 16)
namespace GameServer {
    class ServerConnection : public Network::EngineConnectionPeer {
        char pad_0x1CF0[0xB2B0];
    }; // 0xCFA0
    static_assert(sizeof(ServerConnection) == 0xCFA0);
}
#pragma pack(pop)