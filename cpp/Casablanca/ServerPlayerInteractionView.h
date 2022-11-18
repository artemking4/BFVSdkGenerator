// Object: ServerPlayerInteractionView
// ClassId: 8553
// RuntimeId: 32840
// TypeInfo: 0x0000000144C20720
#include "../GameServer/ServerSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ServerPlayerInteractionView : public GameServer::ServerSubView {
        char pad_0x40[0x38];
    }; // 0x78
    static_assert(sizeof(ServerPlayerInteractionView) == 0x78);
}
#pragma pack(pop)