// Object: UnlockEntity
// ClassId: 8238
// RuntimeId: 51868
// TypeInfo: 0x0000000144C96510
#include "../Entity/Entity.h"

namespace Casablanca {
    class UnlockEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(UnlockEntity) == 0x40);
}