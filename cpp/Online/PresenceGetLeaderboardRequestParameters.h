// Object: PresenceGetLeaderboardRequestParameters
// ClassId: 8467
// RuntimeId: 14146
// TypeInfo: 0x0000000144F077C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetLeaderboardRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGetLeaderboardRequestParameters) == 0x20);
}