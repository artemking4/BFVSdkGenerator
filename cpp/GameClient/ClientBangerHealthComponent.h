// Object: ClientBangerHealthComponent
// ClassId: 6063
// RuntimeId: 3809
// TypeInfo: 0x0000000144E412A0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameClient {
    class ClientBangerHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x10];
    }; // 0x40
    static_assert(sizeof(ClientBangerHealthComponent) == 0x40);
}