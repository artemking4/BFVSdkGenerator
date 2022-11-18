// Object: ServerRankSubView
// ClassId: 8554
// RuntimeId: 20367
// TypeInfo: 0x0000000144DC4F30
#include "../GameServer/ServerSubView.h"

#pragma pack(push, 8)
namespace DicePersistence {
    class ServerRankSubView : public GameServer::ServerSubView {
        char pad_0x40[0x30];
    }; // 0x70
    static_assert(sizeof(ServerRankSubView) == 0x70);
}
#pragma pack(pop)