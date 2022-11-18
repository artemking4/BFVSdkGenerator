// Object: ProfileEntity
// ClassId: 7323
// RuntimeId: 25085
// TypeInfo: 0x0000000144ECD020
#include "../Entity/Entity.h"

namespace Entity {
    class ProfileEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ProfileEntity) == 0x30);
}