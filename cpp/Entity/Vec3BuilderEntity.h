// Object: Vec3BuilderEntity
// ClassId: 8247
// RuntimeId: 19999
// TypeInfo: 0x0000000144ECE450
#include "../Entity/Entity.h"

namespace Entity {
    class Vec3BuilderEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(Vec3BuilderEntity) == 0x68);
}