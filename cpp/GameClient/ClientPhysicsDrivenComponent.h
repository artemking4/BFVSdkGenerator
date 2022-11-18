// Object: ClientPhysicsDrivenComponent
// ClassId: 5864
// RuntimeId: 36869
// TypeInfo: 0x0000000144E39430
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientPhysicsDrivenComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x138];
    }; // 0x170
    static_assert(sizeof(ClientPhysicsDrivenComponent) == 0x170);
}