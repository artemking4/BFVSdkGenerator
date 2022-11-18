// Object: ClientPickupEntity
// ClassId: 7936
// RuntimeId: 2029
// TypeInfo: 0x0000000144F2F390
#include "../Soldier/ClientRenderablePickupEntity.h"

namespace Soldier {
    class ClientPickupEntity : public Soldier::ClientRenderablePickupEntity {
        char pad_0x640[0x1D0];
    }; // 0x810
    static_assert(sizeof(ClientPickupEntity) == 0x810);
}