// Object: PresenceGetDetailedServerGameInfoRequestParameters
// ClassId: 8463
// RuntimeId: 49961
// TypeInfo: 0x0000000144CF4A50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetDetailedServerGameInfoRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x70];
    }; // 0x80
    static_assert(sizeof(PresenceGetDetailedServerGameInfoRequestParameters) == 0x80);
}