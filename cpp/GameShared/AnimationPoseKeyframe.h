// Object: AnimationPoseKeyframe
// ClassId: 5179
// RuntimeId: 3780
// TypeInfo: 0x0000000144E66640
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../GameShared/Sqt.h"

#pragma pack(push, 8)
namespace GameShared {
    class AnimationPoseKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
        Array<GameShared::Sqt> Pose; // 0x20
    }; // 0x28
    static_assert(sizeof(AnimationPoseKeyframe) == 0x28);
}
#pragma pack(pop)