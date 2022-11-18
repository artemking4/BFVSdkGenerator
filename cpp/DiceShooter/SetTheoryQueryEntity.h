// Object: SetTheoryQueryEntity
// ClassId: 7802
// RuntimeId: 61427
// TypeInfo: 0x0000000144DD9860
#include "../Entity/Entity.h"

namespace DiceShooter {
    class SetTheoryQueryEntity : public Entity::Entity {
        char pad_0x20[0x108];
    }; // 0x128
    static_assert(sizeof(SetTheoryQueryEntity) == 0x128);
}