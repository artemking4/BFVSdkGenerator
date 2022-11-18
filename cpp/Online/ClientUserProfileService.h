// Object: ClientUserProfileService
// ClassId: 8520
// RuntimeId: 57701
// TypeInfo: 0x0000000144F04710
#include "../Online/ClientPresenceService.h"

namespace Online {
    class ClientUserProfileService : public Online::ClientPresenceService {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUserProfileService) == 0x70);
}