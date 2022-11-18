// Object: SelectionMappingEntity
// ClassId: 7377
// RuntimeId: 10180
// TypeInfo: 0x0000000144C96840
#include "../Entity/Entity.h"

namespace Casablanca {
    class SelectionMappingEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(SelectionMappingEntity) == 0x40);
}