// Object: AdvancedRandomIntEntity
// ClassId: 6176
// RuntimeId: 57421
// TypeInfo: 0x0000000144ED0540
#include "../Entity/Entity.h"

namespace Entity {
    class AdvancedRandomIntEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(AdvancedRandomIntEntity) == 0x68);
}