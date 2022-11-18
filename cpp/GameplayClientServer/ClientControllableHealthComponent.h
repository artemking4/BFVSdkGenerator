// Object: ClientControllableHealthComponent
// ClassId: 6065
// RuntimeId: 49891
// TypeInfo: 0x0000000144E9E8F0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameplayClientServer {
    class ClientControllableHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x18];
    }; // 0x48
    static_assert(sizeof(ClientControllableHealthComponent) == 0x48);
}