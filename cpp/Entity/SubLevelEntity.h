// Object: SubLevelEntity
// ClassId: 8077
// RuntimeId: 56926
// TypeInfo: 0x0000000144ED96A0
#include "../Entity/Entity.h"

namespace Entity {
    class SubLevelEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(SubLevelEntity) == 0x48);
}