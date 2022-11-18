// Object: BFMultiCompareStringEntity
// ClassId: 6223
// RuntimeId: 14245
// TypeInfo: 0x0000000144CCED40
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFMultiCompareStringEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(BFMultiCompareStringEntity) == 0xC0);
}