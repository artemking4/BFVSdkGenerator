// Object: LinkedMasterTimelineTrackData
// ClassId: 4028
// RuntimeId: 35989
// TypeInfo: 0x0000000144F63D90
#include "../Timeline/LinkTrackData.h"
#include "../Timeline/TimelineEntityData.h"
#include "../Global/Float32.h"
#include "../Timeline/LinkedMasterTimelineKeyframe.h"

#pragma pack(push, 8)
namespace Timeline {
    class LinkedMasterTimelineTrackData : public Timeline::LinkTrackData {
        Timeline::TimelineEntityData LinkedTimelineData; // 0x40
        Float32 LinkedTimelineTimeOffset; // 0x48
        char pad_0x4C[0x4];
        Array<Timeline::LinkedMasterTimelineKeyframe> Keyframes; // 0x50
    }; // 0x58
    static_assert(sizeof(LinkedMasterTimelineTrackData) == 0x58);
}
#pragma pack(pop)