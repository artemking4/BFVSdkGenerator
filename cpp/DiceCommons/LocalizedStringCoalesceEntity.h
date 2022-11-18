// Object: LocalizedStringCoalesceEntity
// ClassId: 7230
// RuntimeId: 43099
// TypeInfo: 0x0000000144DA89F0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LocalizedStringCoalesceEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(LocalizedStringCoalesceEntity) == 0x40);
}