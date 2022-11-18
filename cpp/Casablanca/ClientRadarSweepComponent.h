// Object: ClientRadarSweepComponent
// ClassId: 5867
// RuntimeId: 11947
// TypeInfo: 0x0000000144CD3C60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientRadarSweepComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientRadarSweepComponent) == 0x40);
}