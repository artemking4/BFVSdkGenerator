// Object: BFServerSubView
// ClassId: 8551
// RuntimeId: 39991
// TypeInfo: 0x0000000144C20820
#include "../GameServer/ServerSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFServerSubView : public GameServer::ServerSubView {
        char pad_0x40[0x18];
    }; // 0x58
    static_assert(sizeof(BFServerSubView) == 0x58);
}
#pragma pack(pop)