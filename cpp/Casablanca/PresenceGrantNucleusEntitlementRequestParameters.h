// Object: PresenceGrantNucleusEntitlementRequestParameters
// ClassId: 8475
// RuntimeId: 19839
// TypeInfo: 0x0000000144CF4AD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGrantNucleusEntitlementRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x30];
    }; // 0x40
    static_assert(sizeof(PresenceGrantNucleusEntitlementRequestParameters) == 0x40);
}