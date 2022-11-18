// Object: PresenceJoinGamegroupRequestParameters
// ClassId: 8482
// RuntimeId: 58913
// TypeInfo: 0x0000000144CF42D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceJoinGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceJoinGamegroupRequestParameters) == 0x28);
}