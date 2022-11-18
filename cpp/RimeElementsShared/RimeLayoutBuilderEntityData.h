// Object: RimeLayoutBuilderEntityData
// ClassId: 3119
// RuntimeId: 205
// TypeInfo: 0x0000000144F29EA0
#include "../Entity/EntityData.h"
#include "../RimeElementsShared/RimeElementAxisAlignment.h"

namespace RimeElementsShared {
    class RimeLayoutBuilderEntityData : public Entity::EntityData {
        RimeElementsShared::RimeElementAxisAlignment Alignment; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(RimeLayoutBuilderEntityData) == 0x28);
}