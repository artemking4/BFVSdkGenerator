// Object: BFStringBuilderEntity
// ClassId: 6244
// RuntimeId: 14631
// TypeInfo: 0x0000000144C1F820
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFStringBuilderEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(BFStringBuilderEntity) == 0x40);
}