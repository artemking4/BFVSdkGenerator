// Object: MasterTimelineTrack
// ClassId: 8627
// RuntimeId: 45392
// TypeInfo: 0x0000000144F61B60
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class MasterTimelineTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x38];
    }; // 0x90
    static_assert(sizeof(MasterTimelineTrack) == 0x90);
}