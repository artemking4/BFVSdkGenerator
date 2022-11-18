// Object: ClientCharacterHealthComponent
// ClassId: 6066
// RuntimeId: 43289
// TypeInfo: 0x0000000144E396B0
#include "../GameplayClientServer/ClientControllableHealthComponent.h"

namespace GameClient {
    class ClientCharacterHealthComponent : public GameplayClientServer::ClientControllableHealthComponent {
        char pad_0x48[0x28];
    }; // 0x70
    static_assert(sizeof(ClientCharacterHealthComponent) == 0x70);
}