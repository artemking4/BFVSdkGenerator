// Object: PresenceGetAuthCodeRequestParameters
// ClassId: 8461
// RuntimeId: 48183
// TypeInfo: 0x0000000144F07C40
#include "../Online/PresenceRequestParameters.h"

namespace Online {
    class PresenceGetAuthCodeRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x50];
    }; // 0x60
    static_assert(sizeof(PresenceGetAuthCodeRequestParameters) == 0x60);
}