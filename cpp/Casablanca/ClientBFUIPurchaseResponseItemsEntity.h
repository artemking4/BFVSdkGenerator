// Object: ClientBFUIPurchaseResponseItemsEntity
// ClassId: 6552
// RuntimeId: 56711
// TypeInfo: 0x0000000144CA6360
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPurchaseResponseItemsEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIPurchaseResponseItemsEntity) == 0x58);
}