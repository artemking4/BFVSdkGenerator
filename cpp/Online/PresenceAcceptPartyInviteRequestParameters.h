// Object: PresenceAcceptPartyInviteRequestParameters
// ClassId: 8437
// RuntimeId: 48492
// TypeInfo: 0x0000000144F072C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceAcceptPartyInviteRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceAcceptPartyInviteRequestParameters) == 0x28);
}