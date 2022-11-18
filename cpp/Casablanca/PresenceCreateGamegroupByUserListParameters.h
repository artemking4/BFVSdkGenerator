// Object: PresenceCreateGamegroupByUserListParameters
// ClassId: 8446
// RuntimeId: 60411
// TypeInfo: 0x0000000144CF41D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceCreateGamegroupByUserListParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x50];
    }; // 0x60
    static_assert(sizeof(PresenceCreateGamegroupByUserListParameters) == 0x60);
}