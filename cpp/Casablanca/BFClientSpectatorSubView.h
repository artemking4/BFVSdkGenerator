// Object: BFClientSpectatorSubView
// ClassId: 8549
// RuntimeId: 10947
// TypeInfo: 0x0000000144C5C4D0
#include "../GameClient/ClientSpectatorSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFClientSpectatorSubView : public GameClient::ClientSpectatorSubView {
        char pad_0x48[0x60];
    }; // 0xA8
    static_assert(sizeof(BFClientSpectatorSubView) == 0xA8);
}
#pragma pack(pop)