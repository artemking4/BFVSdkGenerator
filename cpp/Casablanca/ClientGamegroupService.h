// Object: ClientGamegroupService
// ClassId: 8515
// RuntimeId: 15082
// TypeInfo: 0x0000000144CF37D0
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class ClientGamegroupService : public Online::ClientPresenceService {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ClientGamegroupService) == 0x28);
}