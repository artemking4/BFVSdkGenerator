// Object: AnimationPoseTrack
// ClassId: 8613
// RuntimeId: 11977
// TypeInfo: 0x0000000144E50490
#include "../GameCommon/ANTControlTrack.h"

namespace GameCommon {
    class AnimationPoseTrack : public GameCommon::ANTControlTrack {
        char pad_0x80[0x150];
    }; // 0x1D0
    static_assert(sizeof(AnimationPoseTrack) == 0x1D0);
}