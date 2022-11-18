// Object: PersistenceSaveStatusEntity
// ClassId: 7292
// RuntimeId: 31453
// TypeInfo: 0x0000000144C8AF90
#include "../Entity/Entity.h"

namespace Casablanca {
    class PersistenceSaveStatusEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(PersistenceSaveStatusEntity) == 0x70);
}