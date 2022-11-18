// Object: PresenceCheckPrivilegesRequestParameters
// ClassId: 8445
// RuntimeId: 22068
// TypeInfo: 0x0000000144F071C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceCheckPrivilegesRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceCheckPrivilegesRequestParameters) == 0x28);
}