// Object: ClientFriendsService
// ClassId: 8513
// RuntimeId: 54635
// TypeInfo: 0x0000000144F06DC0
#include "../Online/ClientPresenceService.h"

namespace Online {
    class ClientFriendsService : public Online::ClientPresenceService {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientFriendsService) == 0x38);
}