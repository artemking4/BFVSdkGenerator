// Object: ObjectDataEntity
// ClassId: 7275
// RuntimeId: 53215
// TypeInfo: 0x0000000144CD9FB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ObjectDataEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ObjectDataEntity) == 0x38);
}