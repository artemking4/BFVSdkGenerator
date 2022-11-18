// Object: PresenceBlazeJoinGameAndGroupRequestParameters
// ClassId: 8442
// RuntimeId: 32299
// TypeInfo: 0x0000000144CF4950
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceBlazeJoinGameAndGroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceBlazeJoinGameAndGroupRequestParameters) == 0x20);
}