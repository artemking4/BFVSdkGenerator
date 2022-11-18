// Object: PresenceUnsubscribeFriendGameGroupsRequestParameters
// ClassId: 8500
// RuntimeId: 12824
// TypeInfo: 0x0000000144CF4850
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceUnsubscribeFriendGameGroupsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceUnsubscribeFriendGameGroupsRequestParameters) == 0x18);
}