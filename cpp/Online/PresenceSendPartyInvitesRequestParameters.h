// Object: PresenceSendPartyInvitesRequestParameters
// ClassId: 8493
// RuntimeId: 3309
// TypeInfo: 0x0000000144F07340
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceSendPartyInvitesRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceSendPartyInvitesRequestParameters) == 0x20);
}