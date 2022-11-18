// Object: ANTLayerData
// ClassId: 3989
// RuntimeId: 26828
// TypeInfo: 0x0000000144E9E050
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/ANTLayerBlendType.h"

namespace GameShared {
    class ANTLayerData : public Timeline::TimelineTrackData {
        GameShared::ANTLayerBlendType BlendType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ANTLayerData) == 0x38);
}