// Object: PresenceSendMultiInviteRequestParameters
// ClassId: 8492
// RuntimeId: 47917
// TypeInfo: 0x0000000144F076C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceSendMultiInviteRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x8];
    }; // 0x18
    static_assert(sizeof(PresenceSendMultiInviteRequestParameters) == 0x18);
}