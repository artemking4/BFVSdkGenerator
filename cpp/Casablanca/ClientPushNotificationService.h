// Object: ClientPushNotificationService
// ClassId: 8518
// RuntimeId: 56022
// TypeInfo: 0x0000000144CF36D0
#include "../Online/ClientPresenceService.h"

namespace Casablanca {
    class ClientPushNotificationService : public Online::ClientPresenceService {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ClientPushNotificationService) == 0x28);
}