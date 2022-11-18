// Object: BarrageEntity
// ClassId: 6252
// RuntimeId: 43524
// TypeInfo: 0x0000000144DDD940
#include "../Entity/Entity.h"

namespace DiceShooter {
    class BarrageEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(BarrageEntity) == 0x90);
}