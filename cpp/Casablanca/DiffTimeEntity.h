// Object: DiffTimeEntity
// ClassId: 7123
// RuntimeId: 7256
// TypeInfo: 0x0000000144C4A150
#include "../Entity/Entity.h"

namespace Casablanca {
    class DiffTimeEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(DiffTimeEntity) == 0x68);
}