// Object: MasterTimelineTrackData
// ClassId: 4019
// RuntimeId: 24004
// TypeInfo: 0x0000000144F63C90
#include "../Timeline/TimelineTrackData.h"
#include "../Timeline/SlaveTimelineKeyframeData.h"

#pragma pack(push, 8)
namespace Timeline {
    class MasterTimelineTrackData : public Timeline::TimelineTrackData {
        Array<Timeline::SlaveTimelineKeyframeData> Keyframes; // 0x30
        Array<Timeline::TimelineTrackData> Children; // 0x38
    }; // 0x40
    static_assert(sizeof(MasterTimelineTrackData) == 0x40);
}
#pragma pack(pop)