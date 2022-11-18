// Object: ClientLootItemEntity
// ClassId: 7934
// RuntimeId: 27869
// TypeInfo: 0x0000000144C473A0
#include "../Soldier/ClientRenderablePickupEntity.h"

namespace Casablanca {
    class ClientLootItemEntity : public Soldier::ClientRenderablePickupEntity {
        char pad_0x640[0x1D0];
    }; // 0x810
    static_assert(sizeof(ClientLootItemEntity) == 0x810);
}