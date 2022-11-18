// Object: ClientTerrainTrackingComponent
// ClassId: 5900
// RuntimeId: 34584
// TypeInfo: 0x0000000144CD3760
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientTerrainTrackingComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xA8];
    }; // 0xE0
    static_assert(sizeof(ClientTerrainTrackingComponent) == 0xE0);
}