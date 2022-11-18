// Object: ZoneStreamerFocusEntity
// ClassId: 8290
// RuntimeId: 64701
// TypeInfo: 0x0000000144F7CC50
#include "../ZoneStreamer/ZoneStreamerLogicEntity.h"

namespace ZoneStreamer {
    class ZoneStreamerFocusEntity : public ZoneStreamer::ZoneStreamerLogicEntity {
        char pad_0x40[0x38];
    }; // 0x78
    static_assert(sizeof(ZoneStreamerFocusEntity) == 0x78);
}