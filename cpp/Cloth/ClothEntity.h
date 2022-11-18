// Object: ClothEntity
// ClassId: 7884
// RuntimeId: 18748
// TypeInfo: 0x0000000144E21C50
#include "../Entity/ComponentEntity.h"

namespace Cloth {
    class ClothEntity : public Entity::ComponentEntity {
        char pad_0xE8[0x158];
    }; // 0x240
    static_assert(sizeof(ClothEntity) == 0x240);
}