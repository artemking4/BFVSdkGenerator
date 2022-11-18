// Object: PresenceRemoveFriendRequestParameters
// ClassId: 8487
// RuntimeId: 5830
// TypeInfo: 0x0000000144F07A40
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceRemoveFriendRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceRemoveFriendRequestParameters) == 0x20);
}