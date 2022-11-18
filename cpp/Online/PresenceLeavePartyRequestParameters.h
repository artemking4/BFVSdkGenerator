// Object: PresenceLeavePartyRequestParameters
// ClassId: 8485
// RuntimeId: 54094
// TypeInfo: 0x0000000144F07240
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceLeavePartyRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceLeavePartyRequestParameters) == 0x18);
}