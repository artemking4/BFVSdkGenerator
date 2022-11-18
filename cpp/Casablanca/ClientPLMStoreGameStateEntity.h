// Object: ClientPLMStoreGameStateEntity
// ClassId: 6772
// RuntimeId: 19042
// TypeInfo: 0x0000000144C94610
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPLMStoreGameStateEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientPLMStoreGameStateEntity) == 0x30);
}