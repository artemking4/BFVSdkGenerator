// Object: ANTEvalTrackData
// ClassId: 3988
// RuntimeId: 18379
// TypeInfo: 0x0000000144E9E0D0
#include "../Timeline/TimelineTrackData.h"
#include "../GameShared/ANTEvaluatorData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTEvalTrackData : public Timeline::TimelineTrackData {
        GameShared::ANTEvaluatorData EvalData; // 0x30
    }; // 0x38
    static_assert(sizeof(ANTEvalTrackData) == 0x38);
}
#pragma pack(pop)