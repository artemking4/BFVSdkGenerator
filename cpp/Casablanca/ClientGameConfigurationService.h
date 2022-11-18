// Object: ClientGameConfigurationService
// ClassId: 8514
// RuntimeId: 40755
// TypeInfo: 0x0000000144CF3850
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class ClientGameConfigurationService : public Online::ClientPresenceService {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientGameConfigurationService) == 0x30);
}