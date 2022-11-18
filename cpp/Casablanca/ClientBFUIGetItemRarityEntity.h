// Object: ClientBFUIGetItemRarityEntity
// ClassId: 6428
// RuntimeId: 470
// TypeInfo: 0x0000000144CC5B30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetItemRarityEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIGetItemRarityEntity) == 0x90);
}