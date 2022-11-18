// Object: PresenceGetUserIdRequestParameters
// ClassId: 8472
// RuntimeId: 3182
// TypeInfo: 0x0000000144F075C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetUserIdRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGetUserIdRequestParameters) == 0x20);
}