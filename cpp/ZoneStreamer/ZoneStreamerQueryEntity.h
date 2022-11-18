// Object: ZoneStreamerQueryEntity
// ClassId: 8291
// RuntimeId: 49205
// TypeInfo: 0x0000000144F7EB10
#include "../ZoneStreamer/ZoneStreamerLogicEntity.h"

namespace ZoneStreamer {
    class ZoneStreamerQueryEntity : public ZoneStreamer::ZoneStreamerLogicEntity {
        char pad_0x40[0x70];
    }; // 0xB0
    static_assert(sizeof(ZoneStreamerQueryEntity) == 0xB0);
}