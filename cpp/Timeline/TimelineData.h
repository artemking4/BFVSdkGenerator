// Object: TimelineData
// ClassId: 4059
// RuntimeId: 18925
// TypeInfo: 0x0000000144F60E10
#include "../Timeline/TimelineTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class TimelineData : public Timeline::TimelineTrackData {
        Array<Timeline::TimelineTrackData> Children; // 0x30
    }; // 0x38
    static_assert(sizeof(TimelineData) == 0x38);
}
#pragma pack(pop)