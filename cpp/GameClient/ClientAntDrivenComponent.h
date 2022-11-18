// Object: ClientAntDrivenComponent
// ClassId: 5784
// RuntimeId: 54217
// TypeInfo: 0x0000000144E36800
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientAntDrivenComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x30];
    }; // 0x68
    static_assert(sizeof(ClientAntDrivenComponent) == 0x68);
}