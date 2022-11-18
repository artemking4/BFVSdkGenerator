// Object: ClientBFSpectatorCameraEntity
// ClassId: 6619
// RuntimeId: 50986
// TypeInfo: 0x0000000144CC1720
#include "../GameClient/ClientCameraEntityBase.h"

namespace Casablanca {
    class ClientBFSpectatorCameraEntity : public GameClient::ClientCameraEntityBase {
        char pad_0x58[0x1F8];
    }; // 0x250
    static_assert(sizeof(ClientBFSpectatorCameraEntity) == 0x250);
}