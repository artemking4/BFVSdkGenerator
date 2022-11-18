// Object: PresenceGetFirstPartyEntitlementsRequestParameters
// ClassId: 8464
// RuntimeId: 20247
// TypeInfo: 0x0000000144CF4B50
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetFirstPartyEntitlementsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGetFirstPartyEntitlementsRequestParameters) == 0x20);
}