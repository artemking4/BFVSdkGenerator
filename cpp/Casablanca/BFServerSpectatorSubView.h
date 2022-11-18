// Object: BFServerSpectatorSubView
// ClassId: 8557
// RuntimeId: 3702
// TypeInfo: 0x0000000144C645C0
#include "../GameServer/ServerSpectatorSubViewBase.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFServerSpectatorSubView : public GameServer::ServerSpectatorSubViewBase {
        char pad_0x48[0x40];
    }; // 0x88
    static_assert(sizeof(BFServerSpectatorSubView) == 0x88);
}
#pragma pack(pop)