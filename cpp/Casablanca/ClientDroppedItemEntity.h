// Object: ClientDroppedItemEntity
// ClassId: 7931
// RuntimeId: 19649
// TypeInfo: 0x0000000144CD2550
#include "../Soldier/ClientRenderablePickupEntity.h"

namespace Casablanca {
    class ClientDroppedItemEntity : public Soldier::ClientRenderablePickupEntity {
        char pad_0x640[0xD0];
    }; // 0x710
    static_assert(sizeof(ClientDroppedItemEntity) == 0x710);
}