// Object: ClientOrderTypeCompareEntity
// ClassId: 6768
// RuntimeId: 43936
// TypeInfo: 0x0000000144C94830
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientOrderTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientOrderTypeCompareEntity) == 0x38);
}