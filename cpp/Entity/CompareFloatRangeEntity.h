// Object: CompareFloatRangeEntity
// ClassId: 7074
// RuntimeId: 48473
// TypeInfo: 0x0000000144EDC520
#include "../Entity/Entity.h"

namespace Entity {
    class CompareFloatRangeEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(CompareFloatRangeEntity) == 0x80);
}