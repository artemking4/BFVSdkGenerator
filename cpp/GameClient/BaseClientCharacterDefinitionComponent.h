// Object: BaseClientCharacterDefinitionComponent
// ClassId: 5767
// RuntimeId: 52002
// TypeInfo: 0x0000000144E39940
#include "../GameClient/ClientGameComponent.h"

namespace GameClient {
    class BaseClientCharacterDefinitionComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(BaseClientCharacterDefinitionComponent) == 0x40);
}