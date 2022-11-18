// Object: ANTBlendKeyframe
// ClassId: 5176
// RuntimeId: 33021
// TypeInfo: 0x0000000144E96C30
#include "../Timeline/TimelineKeyframeData.h"
#include "../Global/Float32.h"
#include "../GameShared/ANTBlendCurveType.h"
#include "../Timeline/CurveData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBlendKeyframe : public Timeline::TimelineKeyframeData {
        Float32 Time; // 0x18
        Float32 Length; // 0x1C
        GameShared::ANTBlendCurveType BlendCurveType; // 0x20
        Float32 BlendScale; // 0x24
        Timeline::CurveData CurveData; // 0x28
    }; // 0x30
    static_assert(sizeof(ANTBlendKeyframe) == 0x30);
}
#pragma pack(pop)