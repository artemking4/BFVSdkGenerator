// Object: PresenceCreateGamegroupRequestParameters
// ClassId: 8448
// RuntimeId: 54557
// TypeInfo: 0x0000000144CF43D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceCreateGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceCreateGamegroupRequestParameters) == 0x20);
}