// Object: ANTClipKeyframe
// ClassId: 5177
// RuntimeId: 62194
// TypeInfo: 0x0000000144E96CB0
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../Ant/AntRef.h"
#include "../GameShared/ANTClipStartRule.h"
#include "../GameShared/ANTClipEndRule.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTClipKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        Ant::AntRef Controller; // 0x20
        Float32 ClipStartTrim; // 0x34
        Float32 ClipEndTrim; // 0x38
        Float32 ClipCycleStartOffset; // 0x3C
        Float32 ClipTimeScale; // 0x40
        GameShared::ANTClipStartRule ClipStartRule; // 0x44
        GameShared::ANTClipEndRule ClipEndRule; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(ANTClipKeyframe) == 0x50);
}
#pragma pack(pop)