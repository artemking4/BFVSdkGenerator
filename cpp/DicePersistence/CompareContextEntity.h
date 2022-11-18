// Object: CompareContextEntity
// ClassId: 7070
// RuntimeId: 41802
// TypeInfo: 0x0000000144DC5580
#include "../Entity/Entity.h"

namespace DicePersistence {
    class CompareContextEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(CompareContextEntity) == 0x40);
}