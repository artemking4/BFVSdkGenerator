// Object: CompareIntRangeEntity
// ClassId: 7076
// RuntimeId: 31268
// TypeInfo: 0x0000000144EDC410
#include "../Entity/Entity.h"

namespace Entity {
    class CompareIntRangeEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(CompareIntRangeEntity) == 0x80);
}