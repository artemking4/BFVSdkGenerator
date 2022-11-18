// Object: PresenceGetUsersDataRequestParameters
// ClassId: 8474
// RuntimeId: 8876
// TypeInfo: 0x0000000144CF4550
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetUsersDataRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceGetUsersDataRequestParameters) == 0x28);
}