// Object: BFClientInviteService
// ClassId: 8509
// RuntimeId: 34306
// TypeInfo: 0x0000000144CF3950
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class BFClientInviteService : public Online::ClientPresenceService {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(BFClientInviteService) == 0x88);
}