// Object: PlatformSplitterEntity
// ClassId: 7308
// RuntimeId: 31287
// TypeInfo: 0x0000000144E4EEF0
#include "../Entity/Entity.h"

namespace GameCommon {
    class PlatformSplitterEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(PlatformSplitterEntity) == 0x38);
}