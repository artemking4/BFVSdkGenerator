// Object: ClientAuthenticationService
// ClassId: 8511
// RuntimeId: 41782
// TypeInfo: 0x0000000144F06EC0
#include "../Online/ClientPresenceService.h"

namespace Online {
    class ClientAuthenticationService : public Online::ClientPresenceService {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientAuthenticationService) == 0xB0);
}