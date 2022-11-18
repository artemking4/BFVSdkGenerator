// Object: PresenceSetUserInfoAttributeRequestParameters
// ClassId: 8497
// RuntimeId: 3864
// TypeInfo: 0x0000000144CF45D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceSetUserInfoAttributeRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x20];
    }; // 0x30
    static_assert(sizeof(PresenceSetUserInfoAttributeRequestParameters) == 0x30);
}