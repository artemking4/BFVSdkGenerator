// Object: ExternalTimeTrack
// ClassId: 8604
// RuntimeId: 34094
// TypeInfo: 0x0000000144F61E60
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class ExternalTimeTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x48];
    }; // 0xA0
    static_assert(sizeof(ExternalTimeTrack) == 0xA0);
}