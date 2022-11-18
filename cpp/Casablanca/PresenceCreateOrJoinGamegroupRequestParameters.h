// Object: PresenceCreateOrJoinGamegroupRequestParameters
// ClassId: 8449
// RuntimeId: 1299
// TypeInfo: 0x0000000144CF4250
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceCreateOrJoinGamegroupRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceCreateOrJoinGamegroupRequestParameters) == 0x28);
}