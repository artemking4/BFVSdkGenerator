// Object: PresenceGetJoinableGameAndGroupRequestParameters
// ClassId: 8466
// RuntimeId: 4235
// TypeInfo: 0x0000000144CF3C50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetJoinableGameAndGroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceGetJoinableGameAndGroupRequestParameters) == 0x30);
}