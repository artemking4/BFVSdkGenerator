// Object: ClientRenderablePickupEntity
// ClassId: 7930
// RuntimeId: 50108
// TypeInfo: 0x0000000144F2F280
#include "../GameClient/ClientGameComponentEntity.h"

namespace Soldier {
    class ClientRenderablePickupEntity : public GameClient::ClientGameComponentEntity {
        char pad_0x188[0x4B8];
    }; // 0x640
    static_assert(sizeof(ClientRenderablePickupEntity) == 0x640);
}