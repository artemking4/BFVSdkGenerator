// Object: ClientSpectatorSubView
// ClassId: 8548
// RuntimeId: 51762
// TypeInfo: 0x0000000144E41420
#include "../GameClient/ClientSubView.h"

namespace GameClient {
    class ClientSpectatorSubView : public GameClient::ClientSubView {
        char pad_0x38[0x10];
    }; // 0x48
    static_assert(sizeof(ClientSpectatorSubView) == 0x48);
}