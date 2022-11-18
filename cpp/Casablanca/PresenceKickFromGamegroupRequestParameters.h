// Object: PresenceKickFromGamegroupRequestParameters
// ClassId: 8483
// RuntimeId: 48523
// TypeInfo: 0x0000000144CF3E50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceKickFromGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceKickFromGamegroupRequestParameters) == 0x30);
}