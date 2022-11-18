// Object: PresenceSendInviteRequestParameters
// ClassId: 8491
// RuntimeId: 40203
// TypeInfo: 0x0000000144F07740
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceSendInviteRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x1D0];
    }; // 0x1E0
    static_assert(sizeof(PresenceSendInviteRequestParameters) == 0x1E0);
}