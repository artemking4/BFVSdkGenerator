// Object: BiomeQueryEntity
// ClassId: 6256
// RuntimeId: 47912
// TypeInfo: 0x0000000144BDDC80
#include "../Entity/Entity.h"

namespace Ambience {
    class BiomeQueryEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(BiomeQueryEntity) == 0x78);
}