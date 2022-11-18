// Object: PoseTrackKeyframe
// ClassId: 5182
// RuntimeId: 42698
// TypeInfo: 0x0000000144E963B0
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../GameShared/PoseDefinition.h"
#include "../GameShared/PoseTransitionBase.h"

#pragma pack(push, 8)
namespace GameShared {
    class PoseTrackKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        char pad_0x1C[0x4];
        GameShared::PoseDefinition TransitionTo; // 0x20
        Float32 DurationOverride; // 0x28
        char pad_0x2C[0x4];
        GameShared::PoseTransitionBase TransitionOverride; // 0x30
    }; // 0x38
    static_assert(sizeof(PoseTrackKeyframe) == 0x38);
}
#pragma pack(pop)