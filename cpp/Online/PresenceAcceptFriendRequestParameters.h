// Object: PresenceAcceptFriendRequestParameters
// ClassId: 8436
// RuntimeId: 45270
// TypeInfo: 0x0000000144F07AC0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceAcceptFriendRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceAcceptFriendRequestParameters) == 0x20);
}