// Object: ClientPlayerInteractionView
// ClassId: 8545
// RuntimeId: 37889
// TypeInfo: 0x0000000144C1E440
#include "../GameClient/ClientSubView.h"

#pragma pack(push, 8)
namespace Casablanca {
    class ClientPlayerInteractionView : public GameClient::ClientSubView {
        char pad_0x38[0x80];
    }; // 0xB8
    static_assert(sizeof(ClientPlayerInteractionView) == 0xB8);
}
#pragma pack(pop)