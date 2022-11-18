// Object: ClientPartyService
// ClassId: 8517
// RuntimeId: 17428
// TypeInfo: 0x0000000144CF3750
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class ClientPartyService : public Online::ClientPresenceService {
        char pad_0x20[0x230];
    }; // 0x250
    static_assert(sizeof(ClientPartyService) == 0x250);
}