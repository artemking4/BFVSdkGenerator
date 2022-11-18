// Object: ClientStaticModelHealthComponent
// ClassId: 6075
// RuntimeId: 65092
// TypeInfo: 0x0000000144E431F0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameClient {
    class ClientStaticModelHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ClientStaticModelHealthComponent) == 0x38);
}