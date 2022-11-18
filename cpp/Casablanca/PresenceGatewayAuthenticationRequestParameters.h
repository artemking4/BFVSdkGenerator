// Object: PresenceGatewayAuthenticationRequestParameters
// ClassId: 8459
// RuntimeId: 26377
// TypeInfo: 0x0000000144CF44D0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGatewayAuthenticationRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGatewayAuthenticationRequestParameters) == 0x20);
}