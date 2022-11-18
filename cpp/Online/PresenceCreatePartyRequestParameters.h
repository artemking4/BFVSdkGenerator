// Object: PresenceCreatePartyRequestParameters
// ClassId: 8450
// RuntimeId: 44626
// TypeInfo: 0x0000000144F073C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceCreatePartyRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceCreatePartyRequestParameters) == 0x18);
}