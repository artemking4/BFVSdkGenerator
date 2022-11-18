// Object: PresenceGetTournamentTeamInformationParameters
// ClassId: 8471
// RuntimeId: 365
// TypeInfo: 0x0000000144CF4C50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetTournamentTeamInformationParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x70];
    }; // 0x80
    static_assert(sizeof(PresenceGetTournamentTeamInformationParameters) == 0x80);
}