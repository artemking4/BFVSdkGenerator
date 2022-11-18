// Object: BFClientUIInputEntity
// ClassId: 6206
// RuntimeId: 33858
// TypeInfo: 0x0000000144C97BD0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientUIInputEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(BFClientUIInputEntity) == 0x98);
}