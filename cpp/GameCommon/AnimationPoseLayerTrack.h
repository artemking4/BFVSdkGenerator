// Object: AnimationPoseLayerTrack
// ClassId: 8582
// RuntimeId: 51928
// TypeInfo: 0x0000000144E4B300
#include "../GameCommon/AnimationPoseLayerTrackBase.h"

namespace GameCommon {
    class AnimationPoseLayerTrack : public GameCommon::AnimationPoseLayerTrackBase {
        char pad_0x68[0x58];
    }; // 0xC0
    static_assert(sizeof(AnimationPoseLayerTrack) == 0xC0);
}