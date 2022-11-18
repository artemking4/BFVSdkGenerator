// Object: StatReferenceEntity
// ClassId: 8066
// RuntimeId: 34589
// TypeInfo: 0x0000000144DC4860
#include "../Entity/Entity.h"

namespace DicePersistence {
    class StatReferenceEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(StatReferenceEntity) == 0x38);
}