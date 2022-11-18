// Object: ClientBFUIPurchaseOfferEntity
// ClassId: 6550
// RuntimeId: 31996
// TypeInfo: 0x0000000144CA6580
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPurchaseOfferEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIPurchaseOfferEntity) == 0x90);
}