// Object: ANTControllerKeyframe
// ClassId: 5178
// RuntimeId: 35252
// TypeInfo: 0x0000000144E9E250
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../Ant/AntRef.h"
#include "../GameShared/ANTClipStartRule.h"
#include "../GameShared/ANTClipEndRule.h"
#include "../Timeline/CurveData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTControllerKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        Ant::AntRef Controller; // 0x20
        Float32 ClipStartTrim; // 0x34
        Float32 ClipEndTrim; // 0x38
        Float32 ClipCycleStartOffset; // 0x3C
        Float32 ClipTimeScale; // 0x40
        GameShared::ANTClipStartRule ClipStartRule; // 0x44
        GameShared::ANTClipEndRule RuntimeClipEndRule; // 0x48
        Float32 BlendInTime; // 0x4C
        Float32 BlendOutTime; // 0x50
        char pad_0x54[0x4];
        Timeline::CurveData CurveData; // 0x58
    }; // 0x60
    static_assert(sizeof(ANTControllerKeyframe) == 0x60);
}
#pragma pack(pop)