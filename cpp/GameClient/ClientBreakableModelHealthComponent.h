// Object: ClientBreakableModelHealthComponent
// ClassId: 6064
// RuntimeId: 44424
// TypeInfo: 0x0000000144E341E0
#include "../GameplayClientServer/ClientGameHealthComponent.h"

namespace GameClient {
    class ClientBreakableModelHealthComponent : public GameplayClientServer::ClientGameHealthComponent {
        char pad_0x30[0x8];
    }; // 0x38
    static_assert(sizeof(ClientBreakableModelHealthComponent) == 0x38);
}