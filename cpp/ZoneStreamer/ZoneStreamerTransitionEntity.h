// Object: ZoneStreamerTransitionEntity
// ClassId: 8292
// RuntimeId: 34867
// TypeInfo: 0x0000000144F7EA00
#include "../ZoneStreamer/ZoneStreamerLogicEntity.h"

namespace ZoneStreamer {
    class ZoneStreamerTransitionEntity : public ZoneStreamer::ZoneStreamerLogicEntity {
        char pad_0x40[0x18];
    }; // 0x58
    static_assert(sizeof(ZoneStreamerTransitionEntity) == 0x58);
}