// Object: ClientPlayerDeathTypeCompareEntity
// ClassId: 6801
// RuntimeId: 7021
// TypeInfo: 0x0000000144C9C930
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerDeathTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientPlayerDeathTypeCompareEntity) == 0x38);
}