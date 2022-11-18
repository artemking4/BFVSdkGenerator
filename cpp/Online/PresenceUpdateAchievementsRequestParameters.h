// Object: PresenceUpdateAchievementsRequestParameters
// ClassId: 8501
// RuntimeId: 29621
// TypeInfo: 0x0000000144F07CC0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceUpdateAchievementsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x40];
    }; // 0x50
    static_assert(sizeof(PresenceUpdateAchievementsRequestParameters) == 0x50);
}