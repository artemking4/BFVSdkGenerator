// Object: BFClientUISystemEntity
// ClassId: 6217
// RuntimeId: 56110
// TypeInfo: 0x0000000144C97AC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFClientUISystemEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(BFClientUISystemEntity) == 0xC0);
}