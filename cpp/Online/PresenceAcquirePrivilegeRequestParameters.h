// Object: PresenceAcquirePrivilegeRequestParameters
// ClassId: 8438
// RuntimeId: 46157
// TypeInfo: 0x0000000144F07140
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceAcquirePrivilegeRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceAcquirePrivilegeRequestParameters) == 0x30);
}