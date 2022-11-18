// Object: ANTControlTrackData
// ClassId: 4025
// RuntimeId: 28456
// TypeInfo: 0x0000000144E9E150
#include "../Timeline/LinkTrackData.h"
#include "../GameShared/ANTEvaluatorData.h"
#include "../GameShared/TeleportKeyframe.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTControlTrackData : public Timeline::LinkTrackData {
        GameShared::ANTEvaluatorData EvalData; // 0x40
        Array<GameShared::TeleportKeyframe> TeleportKeyframes; // 0x48
        Boolean HideWhenNoClip; // 0x50
        Boolean ForceDisableAnimationLOD; // 0x51
        Boolean AllowPreviousAnimationsToCarryForward; // 0x52
        char pad_0x53[0x5];
    }; // 0x58
    static_assert(sizeof(ANTControlTrackData) == 0x58);
}
#pragma pack(pop)