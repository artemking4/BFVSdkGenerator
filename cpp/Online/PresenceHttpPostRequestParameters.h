// Object: PresenceHttpPostRequestParameters
// ClassId: 8477
// RuntimeId: 38899
// TypeInfo: 0x0000000144F07840
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceHttpPostRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(PresenceHttpPostRequestParameters) == 0x38);
}