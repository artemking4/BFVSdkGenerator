// Object: GuideTrackData
// ClassId: 4017
// RuntimeId: 18102
// TypeInfo: 0x0000000144F60A90
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Int32.h"

namespace Timeline {
    class GuideTrackData : public Timeline::TimelineTrackData {
        Int32 GuideTrackPriority; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(GuideTrackData) == 0x38);
}