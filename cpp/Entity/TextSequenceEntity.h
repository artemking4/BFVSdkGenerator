// Object: TextSequenceEntity
// ClassId: 8092
// RuntimeId: 16602
// TypeInfo: 0x0000000144ED9590
#include "../Entity/Entity.h"

namespace Entity {
    class TextSequenceEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(TextSequenceEntity) == 0x40);
}