// Object: DofReaderEntity
// ClassId: 7126
// RuntimeId: 19688
// TypeInfo: 0x0000000144DAC440
#include "../Entity/Entity.h"

namespace DiceCommons {
    class DofReaderEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(DofReaderEntity) == 0x88);
}