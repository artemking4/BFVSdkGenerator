// Object: BFUIPlayVideoEntity
// ClassId: 6250
// RuntimeId: 4831
// TypeInfo: 0x0000000144C978A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFUIPlayVideoEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(BFUIPlayVideoEntity) == 0x108);
}