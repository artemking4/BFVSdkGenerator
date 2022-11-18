// Object: ClipAnimationEntity
// ClassId: 7063
// RuntimeId: 173
// TypeInfo: 0x0000000144E4BDD0
#include "../Entity/Entity.h"

namespace GameCommon {
    class ClipAnimationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClipAnimationEntity) == 0x48);
}