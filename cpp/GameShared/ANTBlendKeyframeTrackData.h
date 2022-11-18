// Object: ANTBlendKeyframeTrackData
// ClassId: 3985
// RuntimeId: 26233
// TypeInfo: 0x0000000144E96BB0
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/ANTBlendKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBlendKeyframeTrackData : public Timeline::TimelineTrackData {
        Array<GameShared::ANTBlendKeyframe> Keyframes; // 0x30
    }; // 0x38
    static_assert(sizeof(ANTBlendKeyframeTrackData) == 0x38);
}
#pragma pack(pop)