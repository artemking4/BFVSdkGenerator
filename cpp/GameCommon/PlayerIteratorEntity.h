// Object: PlayerIteratorEntity
// ClassId: 7313
// RuntimeId: 26282
// TypeInfo: 0x0000000144E4EDE0
#include "../Entity/Entity.h"

namespace GameCommon {
    class PlayerIteratorEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(PlayerIteratorEntity) == 0x48);
}