// Object: LocalizedStringEntityBase
// ClassId: 7231
// RuntimeId: 5732
// TypeInfo: 0x0000000144F6ACD0
#include "../Entity/Entity.h"

namespace UIIncubator {
    class LocalizedStringEntityBase : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(LocalizedStringEntityBase) == 0x80);
}