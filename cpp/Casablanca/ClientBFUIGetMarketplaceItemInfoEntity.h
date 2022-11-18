// Object: ClientBFUIGetMarketplaceItemInfoEntity
// ClassId: 6430
// RuntimeId: 2595
// TypeInfo: 0x0000000144CC5A20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetMarketplaceItemInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetMarketplaceItemInfoEntity) == 0x98);
}