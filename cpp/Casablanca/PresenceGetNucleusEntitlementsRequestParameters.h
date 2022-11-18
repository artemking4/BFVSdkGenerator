// Object: PresenceGetNucleusEntitlementsRequestParameters
// ClassId: 8469
// RuntimeId: 5273
// TypeInfo: 0x0000000144C40830
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGetNucleusEntitlementsRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x78];
    }; // 0x88
    static_assert(sizeof(PresenceGetNucleusEntitlementsRequestParameters) == 0x88);
}