// Object: PresenceGetUserProfilesRequestParameters
// ClassId: 8473
// RuntimeId: 10045
// TypeInfo: 0x0000000144F07440
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetUserProfilesRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGetUserProfilesRequestParameters) == 0x20);
}