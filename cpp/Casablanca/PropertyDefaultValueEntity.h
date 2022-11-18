// Object: PropertyDefaultValueEntity
// ClassId: 7329
// RuntimeId: 14312
// TypeInfo: 0x0000000144CD9840
#include "../Entity/Entity.h"

namespace Casablanca {
    class PropertyDefaultValueEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(PropertyDefaultValueEntity) == 0x48);
}