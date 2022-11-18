// Object: PresenceDisplayUserProfileRequestParameters
// ClassId: 8453
// RuntimeId: 64679
// TypeInfo: 0x0000000144F070C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceDisplayUserProfileRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceDisplayUserProfileRequestParameters) == 0x28);
}