// Object: EntryToPlayerEntity
// ClassId: 7142
// RuntimeId: 25405
// TypeInfo: 0x0000000144CE5780
#include "../Entity/Entity.h"

namespace Casablanca {
    class EntryToPlayerEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(EntryToPlayerEntity) == 0x40);
}