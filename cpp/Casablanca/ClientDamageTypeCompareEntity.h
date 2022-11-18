// Object: ClientDamageTypeCompareEntity
// ClassId: 6666
// RuntimeId: 8261
// TypeInfo: 0x0000000144CA0B20
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDamageTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientDamageTypeCompareEntity) == 0x38);
}