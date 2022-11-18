// Object: ServerCharacterDefinitionComponent
// ClassId: 5924
// RuntimeId: 55257
// TypeInfo: 0x0000000144DAFF00
#include "../GameServer/BaseServerCharacterDefinitionComponent.h"

namespace DiceCommons {
    class ServerCharacterDefinitionComponent : public GameServer::BaseServerCharacterDefinitionComponent {
        char pad_0x38[0x5A0];
    }; // 0x5D8
    static_assert(sizeof(ServerCharacterDefinitionComponent) == 0x5D8);
}