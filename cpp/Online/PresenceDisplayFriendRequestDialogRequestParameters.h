// Object: PresenceDisplayFriendRequestDialogRequestParameters
// ClassId: 8451
// RuntimeId: 20838
// TypeInfo: 0x0000000144F06FC0
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceDisplayFriendRequestDialogRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(PresenceDisplayFriendRequestDialogRequestParameters) == 0x28);
}