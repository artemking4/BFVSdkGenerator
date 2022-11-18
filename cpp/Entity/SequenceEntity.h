// Object: SequenceEntity
// ClassId: 7378
// RuntimeId: 45795
// TypeInfo: 0x0000000144EDCB80
#include "../Entity/Entity.h"

namespace Entity {
    class SequenceEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(SequenceEntity) == 0x78);
}