// Object: CompareStringEntity
// ClassId: 7077
// RuntimeId: 49293
// TypeInfo: 0x0000000144EDC630
#include "../Entity/Entity.h"

namespace Entity {
    class CompareStringEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(CompareStringEntity) == 0x88);
}