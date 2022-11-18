// Object: ZoneStreamerFocusEntityData
// ClassId: 3934
// RuntimeId: 39415
// TypeInfo: 0x0000000144F7E3F0
#include "../ZoneStreamer/ZoneStreamerLogicEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace ZoneStreamer {
    class ZoneStreamerFocusEntityData : public ZoneStreamer::ZoneStreamerLogicEntityData {
        char pad_0x28[0x8];
        Core::LinearTransform FocusPoint; // 0x30
        Boolean AutoEnabled; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(ZoneStreamerFocusEntityData) == 0x80);
}
#pragma pack(pop)