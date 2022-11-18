// Object: ClientBFUIPurchaseOfferEntityV2
// ClassId: 6551
// RuntimeId: 7933
// TypeInfo: 0x0000000144CA6470
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPurchaseOfferEntityV2 : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIPurchaseOfferEntityV2) == 0xA0);
}