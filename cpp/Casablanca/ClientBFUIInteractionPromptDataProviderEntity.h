// Object: ClientBFUIInteractionPromptDataProviderEntity
// ClassId: 6483
// RuntimeId: 48335
// TypeInfo: 0x0000000144CA1070
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIInteractionPromptDataProviderEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientBFUIInteractionPromptDataProviderEntity) == 0xD8);
}