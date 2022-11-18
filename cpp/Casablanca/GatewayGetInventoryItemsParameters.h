// Object: GatewayGetInventoryItemsParameters
// ClassId: 8435
// RuntimeId: 19384
// TypeInfo: 0x0000000144C407B0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class GatewayGetInventoryItemsParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x48];
    }; // 0x58
    static_assert(sizeof(GatewayGetInventoryItemsParameters) == 0x58);
}