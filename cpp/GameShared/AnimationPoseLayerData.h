// Object: AnimationPoseLayerData
// ClassId: 3992
// RuntimeId: 49184
// TypeInfo: 0x0000000144E665C0
#include "../GameShared/AnimationPoseLayerBaseData.h"
#include "../GameShared/AnimationPoseKeyframe.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationPoseLayerData : public GameShared::AnimationPoseLayerBaseData {
        Array<GameShared::AnimationPoseKeyframe> Keyframes; // 0x48
        Uint32 BasePoseIndex; // 0x50
        char pad_0x54[0x3C];
    }; // 0x90
    static_assert(sizeof(AnimationPoseLayerData) == 0x90);
}
#pragma pack(pop)