// Object: PresenceViewInviteRequestParameters
// ClassId: 8503
// RuntimeId: 35645
// TypeInfo: 0x0000000144F07640
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceViewInviteRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceViewInviteRequestParameters) == 0x18);
}