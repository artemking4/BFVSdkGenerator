// Object: PresenceFriendIsJoinableRequestParameters
// ClassId: 8458
// RuntimeId: 32147
// TypeInfo: 0x0000000144F079C0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceFriendIsJoinableRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceFriendIsJoinableRequestParameters) == 0x20);
}