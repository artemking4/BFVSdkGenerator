// Object: PresenceBlazeBanPlayerRequestParameters
// ClassId: 8440
// RuntimeId: 25228
// TypeInfo: 0x0000000144CF3BD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceBlazeBanPlayerRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceBlazeBanPlayerRequestParameters) == 0x28);
}