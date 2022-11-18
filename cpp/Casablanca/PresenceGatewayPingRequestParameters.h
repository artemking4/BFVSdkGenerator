// Object: PresenceGatewayPingRequestParameters
// ClassId: 8460
// RuntimeId: 17537
// TypeInfo: 0x0000000144CF4450
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceGatewayPingRequestParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceGatewayPingRequestParameters) == 0x20);
}