// Object: ClientBFUIGetOfferEntity
// ClassId: 6432
// RuntimeId: 42412
// TypeInfo: 0x0000000144CC5800
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetOfferEntity : public Entity::Entity {
        char pad_0x20[0xB8];
    }; // 0xD8
    static_assert(sizeof(ClientBFUIGetOfferEntity) == 0xD8);
}