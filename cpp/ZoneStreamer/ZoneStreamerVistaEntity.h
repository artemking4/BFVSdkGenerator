// Object: ZoneStreamerVistaEntity
// ClassId: 8295
// RuntimeId: 9430
// TypeInfo: 0x0000000144F7EC20
#include "../Entity/Entity.h"

namespace ZoneStreamer {
    class ZoneStreamerVistaEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ZoneStreamerVistaEntity) == 0x68);
}