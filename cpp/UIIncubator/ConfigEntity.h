// Object: ConfigEntity
// ClassId: 7089
// RuntimeId: 57317
// TypeInfo: 0x0000000144F6B000
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ConfigEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ConfigEntity) == 0x30);
}