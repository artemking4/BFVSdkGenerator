// Object: ClientSoldierHealthComponent
// ClassId: 6067
// RuntimeId: 1701
// TypeInfo: 0x0000000144F362E0
#include "../GameClient/ClientCharacterHealthComponent.h"

namespace Soldier {
    class ClientSoldierHealthComponent : public GameClient::ClientCharacterHealthComponent {
        char pad_0x70[0x78];
    }; // 0xE8
    static_assert(sizeof(ClientSoldierHealthComponent) == 0xE8);
}