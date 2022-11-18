// Object: PresenceSetGamegroupSettingsRequestParameters
// ClassId: 8496
// RuntimeId: 1996
// TypeInfo: 0x0000000144CF3DD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceSetGamegroupSettingsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x28];
    }; // 0x38
    static_assert(sizeof(PresenceSetGamegroupSettingsRequestParameters) == 0x38);
}