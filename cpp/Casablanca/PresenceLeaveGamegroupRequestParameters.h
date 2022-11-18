// Object: PresenceLeaveGamegroupRequestParameters
// ClassId: 8484
// RuntimeId: 44033
// TypeInfo: 0x0000000144CF3FD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceLeaveGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceLeaveGamegroupRequestParameters) == 0x20);
}