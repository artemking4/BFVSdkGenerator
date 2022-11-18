// Object: ZoneStreamerEntityBase
// ClassId: 8285
// RuntimeId: 43455
// TypeInfo: 0x0000000144F7CD60
#include "../Entity/Entity.h"

namespace ZoneStreamer {
    class ZoneStreamerEntityBase : public Entity::Entity {
        char pad_0x20[0x250];
    }; // 0x270
    static_assert(sizeof(ZoneStreamerEntityBase) == 0x270);
}