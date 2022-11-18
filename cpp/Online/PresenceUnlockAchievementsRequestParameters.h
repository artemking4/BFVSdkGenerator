// Object: PresenceUnlockAchievementsRequestParameters
// ClassId: 8499
// RuntimeId: 50157
// TypeInfo: 0x0000000144F07D40
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceUnlockAchievementsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceUnlockAchievementsRequestParameters) == 0x30);
}