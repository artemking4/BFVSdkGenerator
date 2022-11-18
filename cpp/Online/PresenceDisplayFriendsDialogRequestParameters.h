// Object: PresenceDisplayFriendsDialogRequestParameters
// ClassId: 8452
// RuntimeId: 7035
// TypeInfo: 0x0000000144F07040
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceDisplayFriendsDialogRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceDisplayFriendsDialogRequestParameters) == 0x20);
}