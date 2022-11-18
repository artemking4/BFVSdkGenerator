// Object: ClientSoldierCustomizationComponent
// ClassId: 5810
// RuntimeId: 13342
// TypeInfo: 0x0000000144F363E0
#include "../GameClient/ClientCharacterCustomizationComponent.h"

namespace Soldier {
    class ClientSoldierCustomizationComponent : public GameClient::ClientCharacterCustomizationComponent {
        char pad_0xC68[0x668];
    }; // 0x12D0
    static_assert(sizeof(ClientSoldierCustomizationComponent) == 0x12D0);
}