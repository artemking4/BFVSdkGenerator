// Object: PresenceCreateGamegroupFromTemplateRequestParameters
// ClassId: 8447
// RuntimeId: 35097
// TypeInfo: 0x0000000144CF4350
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceCreateGamegroupFromTemplateRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceCreateGamegroupFromTemplateRequestParameters) == 0x20);
}