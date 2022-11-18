// Object: ClientHorseHealthComponent
// ClassId: 6069
// RuntimeId: 64511
// TypeInfo: 0x0000000144CD3E60
#include "../GameplayClientServer/ClientControllableHealthComponent.h"

namespace Casablanca {
    class ClientHorseHealthComponent : public GameplayClientServer::ClientControllableHealthComponent {
        char pad_0x48[0x70];
    }; // 0xB8
    static_assert(sizeof(ClientHorseHealthComponent) == 0xB8);
}