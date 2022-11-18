// Object: ZoneStreamerNotificationEntity
// ClassId: 8294
// RuntimeId: 15754
// TypeInfo: 0x0000000144F7ED30
#include "../Entity/Entity.h"

namespace ZoneStreamer {
    class ZoneStreamerNotificationEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ZoneStreamerNotificationEntity) == 0x30);
}