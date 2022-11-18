// Object: GlobalContextEntity
// ClassId: 7190
// RuntimeId: 16049
// TypeInfo: 0x0000000144DC5470
#include "../Entity/Entity.h"

namespace DicePersistence {
    class GlobalContextEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(GlobalContextEntity) == 0x40);
}