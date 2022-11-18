// Object: ClientHitTypeCompareEntity
// ClassId: 6725
// RuntimeId: 60355
// TypeInfo: 0x0000000144CA0A10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientHitTypeCompareEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ClientHitTypeCompareEntity) == 0x38);
}