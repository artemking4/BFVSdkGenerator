// Object: EngineConnectionPeer
// ClassId: 5738
// RuntimeId: 48677
// TypeInfo: 0x0000000144EA5880
#include "../Network/EngineConnection.h"

namespace Network {
    class EngineConnectionPeer : public Network::EngineConnection {
        char pad_0x8A0[0x1450];
    }; // 0x1CF0
    static_assert(sizeof(EngineConnectionPeer) == 0x1CF0);
}