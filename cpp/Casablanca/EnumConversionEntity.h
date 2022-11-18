// Object: EnumConversionEntity
// ClassId: 7143
// RuntimeId: 13042
// TypeInfo: 0x0000000144C8C610
#include "../Entity/Entity.h"

namespace Casablanca {
    class EnumConversionEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(EnumConversionEntity) == 0x80);
}