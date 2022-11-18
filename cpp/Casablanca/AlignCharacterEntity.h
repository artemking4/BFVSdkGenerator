// Object: AlignCharacterEntity
// ClassId: 6177
// RuntimeId: 45424
// TypeInfo: 0x0000000144C1F0F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class AlignCharacterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(AlignCharacterEntity) == 0x30);
}