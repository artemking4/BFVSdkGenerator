// Object: PresenceSetGamegroupAttributeRequestParameters
// ClassId: 8494
// RuntimeId: 5178
// TypeInfo: 0x0000000144CF3F50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceSetGamegroupAttributeRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceSetGamegroupAttributeRequestParameters) == 0x30);
}