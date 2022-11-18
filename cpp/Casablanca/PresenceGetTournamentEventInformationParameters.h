// Object: PresenceGetTournamentEventInformationParameters
// ClassId: 8470
// RuntimeId: 13535
// TypeInfo: 0x0000000144CF4BD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetTournamentEventInformationParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(PresenceGetTournamentEventInformationParameters) == 0x38);
}