// Object: PresencePromoteAdminGamegroupRequestParameters
// ClassId: 8486
// RuntimeId: 40068
// TypeInfo: 0x0000000144CF3D50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresencePromoteAdminGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x58];
    }; // 0x68
    static_assert(sizeof(PresencePromoteAdminGamegroupRequestParameters) == 0x68);
}