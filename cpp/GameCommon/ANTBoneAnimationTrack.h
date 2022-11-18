// Object: ANTBoneAnimationTrack
// ClassId: 8579
// RuntimeId: 42685
// TypeInfo: 0x0000000144E4BD50
#include "../Timeline/TimelineTrack.h"

namespace GameCommon {
    class ANTBoneAnimationTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ANTBoneAnimationTrack) == 0x68);
}