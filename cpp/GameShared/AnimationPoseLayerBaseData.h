// Object: AnimationPoseLayerBaseData
// ClassId: 3991
// RuntimeId: 17953
// TypeInfo: 0x0000000144E666C0
#include "../GameShared/ANTLayerData.h"
#include "../Timeline/FloatTrackData.h"
#include "../Global/Boolean.h"

namespace GameShared {
    class AnimationPoseLayerBaseData : public GameShared::ANTLayerData {
        Timeline::FloatTrackData Weight; // 0x38
        Boolean UseAbsoluteTrajectory; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(AnimationPoseLayerBaseData) == 0x48);
}