// Object: ZoneStreamerTransitionEntityData
// ClassId: 3936
// RuntimeId: 28996
// TypeInfo: 0x0000000144F7E4F0
#include "../ZoneStreamer/ZoneStreamerLogicEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerTransitionEntityData : public ZoneStreamer::ZoneStreamerLogicEntityData {
        Boolean AutoBegin; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ZoneStreamerTransitionEntityData) == 0x30);
}
#pragma pack(pop)