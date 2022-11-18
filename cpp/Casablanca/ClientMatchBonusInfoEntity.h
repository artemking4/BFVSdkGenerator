// Object: ClientMatchBonusInfoEntity
// ClassId: 6748
// RuntimeId: 9395
// TypeInfo: 0x0000000144C52D50
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMatchBonusInfoEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientMatchBonusInfoEntity) == 0x58);
}