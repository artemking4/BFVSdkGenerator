// Object: GameSplineEntity
// ClassId: 7987
// RuntimeId: 17773
// TypeInfo: 0x0000000144E4D7A0
#include "../Entity/SpatialEntity.h"

namespace GameCommon {
    class GameSplineEntity : public Entity::SpatialEntity {
        char pad_0x30[0x70];
    }; // 0xA0
    static_assert(sizeof(GameSplineEntity) == 0xA0);
}