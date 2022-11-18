// Object: ANTClipKeyframeTrackData
// ClassId: 3987
// RuntimeId: 21182
// TypeInfo: 0x0000000144E96B30
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/ANTClipKeyframe.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTClipKeyframeTrackData : public Timeline::TimelineTrackData {
        Array<GameShared::ANTClipKeyframe> Keyframes; // 0x30
    }; // 0x38
    static_assert(sizeof(ANTClipKeyframeTrackData) == 0x38);
}
#pragma pack(pop)