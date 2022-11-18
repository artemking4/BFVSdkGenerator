// Object: ClientPlayerEntryComponent
// ClassId: 5827
// RuntimeId: 28033
// TypeInfo: 0x0000000144E391B0
#include "../GameClient/ClientEntryComponent.h"

namespace GameClient {
    class ClientPlayerEntryComponent : public GameClient::ClientEntryComponent {
        char pad_0x410[0x380];
    }; // 0x790
    static_assert(sizeof(ClientPlayerEntryComponent) == 0x790);
}