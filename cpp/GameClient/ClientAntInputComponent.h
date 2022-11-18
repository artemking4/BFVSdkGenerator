// Object: ClientAntInputComponent
// ClassId: 5785
// RuntimeId: 9010
// TypeInfo: 0x0000000144E36780
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientAntInputComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ClientAntInputComponent) == 0xB0);
}