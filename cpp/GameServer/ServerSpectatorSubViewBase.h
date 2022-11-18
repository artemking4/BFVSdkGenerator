// Object: ServerSpectatorSubViewBase
// ClassId: 8556
// RuntimeId: 8630
// TypeInfo: 0x0000000144E65660
#include "../GameServer/ServerSubView.h"

namespace GameServer {
    class ServerSpectatorSubViewBase : public GameServer::ServerSubView {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(ServerSpectatorSubViewBase) == 0x48);
}