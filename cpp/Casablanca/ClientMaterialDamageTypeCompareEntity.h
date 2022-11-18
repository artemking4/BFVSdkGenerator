// Object: ClientMaterialDamageTypeCompareEntity
// ClassId: 6749
// RuntimeId: 8971
// TypeInfo: 0x0000000144CA0900
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientMaterialDamageTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientMaterialDamageTypeCompareEntity) == 0x38);
}