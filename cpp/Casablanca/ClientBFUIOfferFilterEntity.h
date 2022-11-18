// Object: ClientBFUIOfferFilterEntity
// ClassId: 6517
// RuntimeId: 46211
// TypeInfo: 0x0000000144CA68B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIOfferFilterEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(ClientBFUIOfferFilterEntity) == 0xE8);
}