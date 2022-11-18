// Object: ZoneStreamerQueryEntityData
// ClassId: 3935
// RuntimeId: 58563
// TypeInfo: 0x0000000144F7E370
#include "../ZoneStreamer/ZoneStreamerLogicEntityData.h"
#include "../ZoneStreamer/ZoneStreamerQueryEntityMode.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace ZoneStreamer {
    class ZoneStreamerQueryEntityData : public ZoneStreamer::ZoneStreamerLogicEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform FocusPoint; // 0x30
        ZoneStreamer::ZoneStreamerQueryEntityMode Mode; // 0x70
        Boolean IncludeNeighbours; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(ZoneStreamerQueryEntityData) == 0x80);
}
#pragma pack(pop)