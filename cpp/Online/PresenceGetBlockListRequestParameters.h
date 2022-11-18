// Object: PresenceGetBlockListRequestParameters
// ClassId: 8462
// RuntimeId: 19190
// TypeInfo: 0x0000000144F07940
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetBlockListRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceGetBlockListRequestParameters) == 0x18);
}