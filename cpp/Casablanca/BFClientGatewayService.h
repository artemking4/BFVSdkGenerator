// Object: BFClientGatewayService
// ClassId: 8508
// RuntimeId: 54523
// TypeInfo: 0x0000000144CF39D0
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class BFClientGatewayService : public Online::ClientPresenceService {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(BFClientGatewayService) == 0x58);
}