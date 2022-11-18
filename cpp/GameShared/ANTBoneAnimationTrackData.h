// Object: ANTBoneAnimationTrackData
// ClassId: 3986
// RuntimeId: 18551
// TypeInfo: 0x0000000144E9E3D0
#include "../Timeline/TimelineTrackData.h"
#include "../Timeline/LayeredTransformTrackData.h"
#include "../GameShared/ANTEvalTrackData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ANTBoneAnimationTrackData : public Timeline::TimelineTrackData {
        Timeline::LayeredTransformTrackData LayeredTransformTrack; // 0x30
        GameShared::ANTEvalTrackData AntEvalTrack; // 0x38
        Array<Timeline::TimelineTrackData> BoneTracks; // 0x40
    }; // 0x48
    static_assert(sizeof(ANTBoneAnimationTrackData) == 0x48);
}
#pragma pack(pop)