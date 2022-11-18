// Object: PresenceJoinGamegroupByInviteTokenRequestParameters
// ClassId: 8479
// RuntimeId: 60509
// TypeInfo: 0x0000000144CF4050
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceJoinGamegroupByInviteTokenRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x70];
    }; // 0x80
    static_assert(sizeof(PresenceJoinGamegroupByInviteTokenRequestParameters) == 0x80);
}