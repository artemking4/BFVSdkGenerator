// Object: PresenceReservePlayersInGameGroupRequestParameters
// ClassId: 8490
// RuntimeId: 46659
// TypeInfo: 0x0000000144CF3CD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceReservePlayersInGameGroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x38];
    }; // 0x48
    static_assert(sizeof(PresenceReservePlayersInGameGroupRequestParameters) == 0x48);
}