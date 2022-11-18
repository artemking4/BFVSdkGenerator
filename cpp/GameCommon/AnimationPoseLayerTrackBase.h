// Object: AnimationPoseLayerTrackBase
// ClassId: 8581
// RuntimeId: 46076
// TypeInfo: 0x0000000144E4B280
#include "../Timeline/TimelineTrack.h"

namespace GameCommon {
    class AnimationPoseLayerTrackBase : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(AnimationPoseLayerTrackBase) == 0x68);
}