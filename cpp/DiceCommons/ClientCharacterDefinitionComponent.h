// Object: ClientCharacterDefinitionComponent
// ClassId: 5768
// RuntimeId: 50630
// TypeInfo: 0x0000000144DB0000
#include "../GameClient/BaseClientCharacterDefinitionComponent.h"

namespace DiceCommons {
    class ClientCharacterDefinitionComponent : public GameClient::BaseClientCharacterDefinitionComponent {
        char pad_0x40[0x3B0];
    }; // 0x3F0
    static_assert(sizeof(ClientCharacterDefinitionComponent) == 0x3F0);
}