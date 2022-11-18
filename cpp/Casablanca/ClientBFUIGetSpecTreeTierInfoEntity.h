// Object: ClientBFUIGetSpecTreeTierInfoEntity
// ClassId: 6451
// RuntimeId: 10266
// TypeInfo: 0x0000000144CB0E30
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSpecTreeTierInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetSpecTreeTierInfoEntity) == 0x98);
}