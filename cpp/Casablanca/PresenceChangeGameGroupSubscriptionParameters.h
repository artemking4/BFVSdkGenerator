// Object: PresenceChangeGameGroupSubscriptionParameters
// ClassId: 8444
// RuntimeId: 10730
// TypeInfo: 0x0000000144CF47D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceChangeGameGroupSubscriptionParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x38];
    }; // 0x48
    static_assert(sizeof(PresenceChangeGameGroupSubscriptionParameters) == 0x48);
}