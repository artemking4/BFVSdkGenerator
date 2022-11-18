// Object: ClientWeatheringComponent
// ClassId: 5918
// RuntimeId: 61449
// TypeInfo: 0x0000000144CCFAE0
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientWeatheringComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xA8];
    }; // 0xE0
    static_assert(sizeof(ClientWeatheringComponent) == 0xE0);
}