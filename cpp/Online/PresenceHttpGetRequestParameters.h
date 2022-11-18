// Object: PresenceHttpGetRequestParameters
// ClassId: 8476
// RuntimeId: 62001
// TypeInfo: 0x0000000144F078C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceHttpGetRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(PresenceHttpGetRequestParameters) == 0x38);
}