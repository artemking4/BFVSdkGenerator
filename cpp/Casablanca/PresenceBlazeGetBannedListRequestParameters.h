// Object: PresenceBlazeGetBannedListRequestParameters
// ClassId: 8441
// RuntimeId: 33017
// TypeInfo: 0x0000000144CF3B50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceBlazeGetBannedListRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceBlazeGetBannedListRequestParameters) == 0x20);
}