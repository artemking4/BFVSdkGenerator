// Object: ClientConnection
// ClassId: 5739
// RuntimeId: 62716
// TypeInfo: 0x0000000144E3B6E0
#include "../Network/EngineConnectionPeer.h"

#pragma pack(push, 16)
namespace GameClient {
    class ClientConnection : public Network::EngineConnectionPeer {
        char pad_0x1CF0[0xB1B0];
    }; // 0xCEA0
    static_assert(sizeof(ClientConnection) == 0xCEA0);
}
#pragma pack(pop)