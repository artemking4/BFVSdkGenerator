// Object: DifficultyIndexEntity
// ClassId: 7124
// RuntimeId: 40084
// TypeInfo: 0x0000000144E50210
#include "../Entity/Entity.h"

namespace GameCommon {
    class DifficultyIndexEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(DifficultyIndexEntity) == 0x38);
}