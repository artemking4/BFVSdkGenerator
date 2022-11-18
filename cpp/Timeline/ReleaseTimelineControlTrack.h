// Object: ReleaseTimelineControlTrack
// ClassId: 8628
// RuntimeId: 37281
// TypeInfo: 0x0000000144F64C50
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class ReleaseTimelineControlTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ReleaseTimelineControlTrack) == 0x68);
}