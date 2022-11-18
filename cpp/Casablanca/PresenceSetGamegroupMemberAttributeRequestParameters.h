// Object: PresenceSetGamegroupMemberAttributeRequestParameters
// ClassId: 8495
// RuntimeId: 23955
// TypeInfo: 0x0000000144CF3ED0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceSetGamegroupMemberAttributeRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(PresenceSetGamegroupMemberAttributeRequestParameters) == 0x38);
}