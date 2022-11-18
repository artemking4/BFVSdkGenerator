// Object: ClientActivityFeedService
// ClassId: 8505
// RuntimeId: 10872
// TypeInfo: 0x0000000144CF38D0
#include "../Online/PresenceService.h"

namespace Casablanca {
    class ClientActivityFeedService : public Online::PresenceService {
        char pad_0x10[0x18];
    }; // 0x28
    static_assert(sizeof(ClientActivityFeedService) == 0x28);
}