// Object: ComponentEntity
// ClassId: 7883
// RuntimeId: 14720
// TypeInfo: 0x0000000144EDC300
#include "../Entity/SpatialEntity.h"

namespace Entity {
    class ComponentEntity : public Entity::SpatialEntity {
        char pad_0x30[0xB8];
    }; // 0xE8
    static_assert(sizeof(ComponentEntity) == 0xE8);
}