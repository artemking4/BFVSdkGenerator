// Object: PresenceGetGameGroupsRequestParameters
// ClassId: 8465
// RuntimeId: 25203
// TypeInfo: 0x0000000144CF49D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetGameGroupsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceGetGameGroupsRequestParameters) == 0x28);
}