// Object: PresenceInviteFriendRequestParameters
// ClassId: 8478
// RuntimeId: 60607
// TypeInfo: 0x0000000144F07B40
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceInviteFriendRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceInviteFriendRequestParameters) == 0x20);
}