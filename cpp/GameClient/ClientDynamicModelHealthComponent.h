// Object: ClientDynamicModelHealthComponent
// ClassId: 6072
// RuntimeId: 53241
// TypeInfo: 0x0000000144E411A0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameClient {
    class ClientDynamicModelHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ClientDynamicModelHealthComponent) == 0x38);
}