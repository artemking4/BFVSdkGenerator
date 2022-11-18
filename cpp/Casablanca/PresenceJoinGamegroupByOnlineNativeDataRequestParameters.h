// Object: PresenceJoinGamegroupByOnlineNativeDataRequestParameters
// ClassId: 8480
// RuntimeId: 49611
// TypeInfo: 0x0000000144CF40D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceJoinGamegroupByOnlineNativeDataRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceJoinGamegroupByOnlineNativeDataRequestParameters) == 0x28);
}