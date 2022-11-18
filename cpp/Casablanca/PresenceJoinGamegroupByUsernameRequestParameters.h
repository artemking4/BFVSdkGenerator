// Object: PresenceJoinGamegroupByUsernameRequestParameters
// ClassId: 8481
// RuntimeId: 37609
// TypeInfo: 0x0000000144CF4150
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceJoinGamegroupByUsernameRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x30];
    }; // 0x40
    static_assert(sizeof(PresenceJoinGamegroupByUsernameRequestParameters) == 0x40);
}