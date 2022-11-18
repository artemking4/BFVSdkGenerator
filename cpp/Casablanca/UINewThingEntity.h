// Object: UINewThingEntity
// ClassId: 8175
// RuntimeId: 23122
// TypeInfo: 0x0000000144CB8C20
#include "../Entity/Entity.h"

namespace Casablanca {
    class UINewThingEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(UINewThingEntity) == 0x48);
}