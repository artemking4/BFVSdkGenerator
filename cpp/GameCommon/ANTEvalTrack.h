// Object: ANTEvalTrack
// ClassId: 8580
// RuntimeId: 2348
// TypeInfo: 0x0000000144E4BA50
#include "../Timeline/TimelineTrack.h"

namespace GameCommon {
    class ANTEvalTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ANTEvalTrack) == 0x68);
}