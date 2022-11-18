// Object: ClientReflectionVolumeComponent
// ClassId: 5868
// RuntimeId: 61670
// TypeInfo: 0x0000000144E41320
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class ClientReflectionVolumeComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientReflectionVolumeComponent) == 0x40);
}