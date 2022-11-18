// Object: ZoneStreamerLogicEntity
// ClassId: 8288
// RuntimeId: 28058
// TypeInfo: 0x0000000144F7CE70
#include "../Entity/Entity.h"

namespace ZoneStreamer {
    class ZoneStreamerLogicEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ZoneStreamerLogicEntity) == 0x40);
}