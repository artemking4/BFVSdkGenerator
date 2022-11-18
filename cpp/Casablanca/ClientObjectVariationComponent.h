// Object: ClientObjectVariationComponent
// ClassId: 5857
// RuntimeId: 35976
// TypeInfo: 0x0000000144CD3D60
#include "../GameClient/ClientGameComponent.h"

namespace Casablanca {
    class ClientObjectVariationComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x78];
    }; // 0xB0
    static_assert(sizeof(ClientObjectVariationComponent) == 0xB0);
}