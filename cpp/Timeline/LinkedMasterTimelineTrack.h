// Object: LinkedMasterTimelineTrack
// ClassId: 8621
// RuntimeId: 2579
// TypeInfo: 0x0000000144F61C60
#include "../Timeline/LinkTrack.h"

namespace Timeline {
    class LinkedMasterTimelineTrack : public Timeline::LinkTrack {
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(LinkedMasterTimelineTrack) == 0x60);
}