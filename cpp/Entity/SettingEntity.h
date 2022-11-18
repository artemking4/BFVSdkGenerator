// Object: SettingEntity
// ClassId: 7803
// RuntimeId: 34775
// TypeInfo: 0x0000000144ECCE00
#include "../Entity/Entity.h"

namespace Entity {
    class SettingEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(SettingEntity) == 0x50);
}