// Object: ClientFaceposerComponent
// ClassId: 5836
// RuntimeId: 22564
// TypeInfo: 0x0000000144F366E0
#include "../GameClient/ClientGameComponent.h"

namespace Soldier {
    class ClientFaceposerComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x128];
    }; // 0x160
    static_assert(sizeof(ClientFaceposerComponent) == 0x160);
}