// Object: BFRefCountAcquireReleaseEntity
// ClassId: 6225
// RuntimeId: 13684
// TypeInfo: 0x0000000144C8D1C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class BFRefCountAcquireReleaseEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(BFRefCountAcquireReleaseEntity) == 0x38);
}