// Object: ClientPA2TargetComponent
// ClassId: 5858
// RuntimeId: 791
// TypeInfo: 0x0000000144E3F200
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientPA2TargetComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x28];
    }; // 0x60
    static_assert(sizeof(ClientPA2TargetComponent) == 0x60);
}