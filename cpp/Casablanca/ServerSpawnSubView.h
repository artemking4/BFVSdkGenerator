// Object: ServerSpawnSubView
// ClassId: 8555
// RuntimeId: 10694
// TypeInfo: 0x0000000144C5FAF0
#include "../GameServer/ServerSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ServerSpawnSubView : public GameServer::ServerSubView {
        char pad_0x40[0x8];
    }; // 0x48
    static_assert(sizeof(ServerSpawnSubView) == 0x48);
}
#pragma pack(pop)