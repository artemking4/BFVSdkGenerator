// Object: PresenceSubscribeFriendGameGroupsRequestParameters
// ClassId: 8498
// RuntimeId: 62245
// TypeInfo: 0x0000000144CF48D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceSubscribeFriendGameGroupsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceSubscribeFriendGameGroupsRequestParameters) == 0x18);
}