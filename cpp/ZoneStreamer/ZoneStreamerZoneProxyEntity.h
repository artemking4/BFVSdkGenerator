// Object: ZoneStreamerZoneProxyEntity
// ClassId: 8293
// RuntimeId: 28503
// TypeInfo: 0x0000000144F7E8F0
#include "../ZoneStreamer/ZoneStreamerLogicEntity.h"

namespace ZoneStreamer {
    class ZoneStreamerZoneProxyEntity : public ZoneStreamer::ZoneStreamerLogicEntity {
        char pad_0x40[0x40];
    }; // 0x80
    static_assert(sizeof(ZoneStreamerZoneProxyEntity) == 0x80);
}