// Object: BFClientSubView
// ClassId: 8543
// RuntimeId: 41866
// TypeInfo: 0x0000000144C1E3C0
#include "../GameClient/ClientSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFClientSubView : public GameClient::ClientSubView {
        char pad_0x38[0x240];
    }; // 0x278
    static_assert(sizeof(BFClientSubView) == 0x278);
}
#pragma pack(pop)