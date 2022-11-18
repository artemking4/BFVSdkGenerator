// Object: PresenceBlazeRemovePlayerFromBannedListRequestParameters
// ClassId: 8443
// RuntimeId: 23578
// TypeInfo: 0x0000000144CF3AD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceBlazeRemovePlayerFromBannedListRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceBlazeRemovePlayerFromBannedListRequestParameters) == 0x28);
}