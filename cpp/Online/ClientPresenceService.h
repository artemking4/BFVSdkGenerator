// Object: ClientPresenceService
// ClassId: 8506
// RuntimeId: 33663
// TypeInfo: 0x0000000144F06CC0
#include "../Online/PresenceService.h"

namespace Online {
    class ClientPresenceService : public Online::PresenceService {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(ClientPresenceService) == 0x20);
}