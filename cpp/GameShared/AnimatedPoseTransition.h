// Object: AnimatedPoseTransition
// ClassId: 4450
// RuntimeId: 40452
// TypeInfo: 0x0000000144E96530
#include "../GameShared/PoseTransitionBase.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimatedPoseTransition : public GameShared::PoseTransitionBase {
        Ant::AntRef TransitionAnimation; // 0x20
        Float32 AnimationBlendInTime; // 0x34
        Float32 AnimationBlendOutTime; // 0x38
        Float32 TransitionAnimationDuration; // 0x3C
    }; // 0x40
    static_assert(sizeof(AnimatedPoseTransition) == 0x40);
}
#pragma pack(pop)