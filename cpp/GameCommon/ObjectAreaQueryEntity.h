// Object: ObjectAreaQueryEntity
// ClassId: 7271
// RuntimeId: 64403
// TypeInfo: 0x0000000144E4F000
#include "../Entity/Entity.h"

namespace GameCommon {
    class ObjectAreaQueryEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ObjectAreaQueryEntity) == 0x58);
}