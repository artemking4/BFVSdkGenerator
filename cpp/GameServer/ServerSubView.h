// Object: ServerSubView
// ClassId: 8550
// RuntimeId: 59550
// TypeInfo: 0x0000000144E65560
#include "../GameCommon/SubView.h"

namespace GameServer {
    class ServerSubView : public GameCommon::SubView {
        char pad_0x10[0x30];
    }; // 0x40
    static_assert(sizeof(ServerSubView) == 0x40);
}