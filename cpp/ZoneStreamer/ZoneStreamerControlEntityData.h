// Object: ZoneStreamerControlEntityData
// ClassId: 3933
// RuntimeId: 57213
// TypeInfo: 0x0000000144F7E570
#include "../ZoneStreamer/ZoneStreamerLogicEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace ZoneStreamer {
    class ZoneStreamerControlEntityData : public ZoneStreamer::ZoneStreamerLogicEntityData {
        Boolean StartPaused; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ZoneStreamerControlEntityData) == 0x30);
}
#pragma pack(pop)