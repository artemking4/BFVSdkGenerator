// Object: SwitchPropertyStringEntity
// ClassId: 8083
// RuntimeId: 41411
// TypeInfo: 0x0000000144ECD8A0
#include "../Entity/Entity.h"

namespace Entity {
    class SwitchPropertyStringEntity : public Entity::Entity {
        char pad_0x20[0xC8];
    }; // 0xE8
    static_assert(sizeof(SwitchPropertyStringEntity) == 0xE8);
}