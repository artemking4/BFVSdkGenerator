// Object: ClientSubView
// ClassId: 8542
// RuntimeId: 30820
// TypeInfo: 0x0000000144E413A0
#include "../GameCommon/SubView.h"

namespace GameClient {
    class ClientSubView : public GameCommon::SubView {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(ClientSubView) == 0x38);
}