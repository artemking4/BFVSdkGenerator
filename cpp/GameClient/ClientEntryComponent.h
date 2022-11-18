// Object: ClientEntryComponent
// ClassId: 5826
// RuntimeId: 33504
// TypeInfo: 0x0000000144E397B0
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientEntryComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x3D8];
    }; // 0x410
    static_assert(sizeof(ClientEntryComponent) == 0x410);
}