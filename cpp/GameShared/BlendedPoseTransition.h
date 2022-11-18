// Object: BlendedPoseTransition
// ClassId: 4451
// RuntimeId: 56609
// TypeInfo: 0x0000000144E964B0
#include "../GameShared/PoseTransitionBase.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlendedPoseTransition : public GameShared::PoseTransitionBase {
        Float32 BlendTime; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BlendedPoseTransition) == 0x28);
}
#pragma pack(pop)