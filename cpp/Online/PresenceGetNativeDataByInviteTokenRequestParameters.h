// Object: PresenceGetNativeDataByInviteTokenRequestParameters
// ClassId: 8468
// RuntimeId: 22085
// TypeInfo: 0x0000000144F07540
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetNativeDataByInviteTokenRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x70];
    }; // 0x80
    static_assert(sizeof(PresenceGetNativeDataByInviteTokenRequestParameters) == 0x80);
}