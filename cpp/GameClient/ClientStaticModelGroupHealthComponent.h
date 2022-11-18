// Object: ClientStaticModelGroupHealthComponent
// ClassId: 6074
// RuntimeId: 25914
// TypeInfo: 0x0000000144E40EA0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameClient {
    class ClientStaticModelGroupHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ClientStaticModelGroupHealthComponent) == 0x38);
}