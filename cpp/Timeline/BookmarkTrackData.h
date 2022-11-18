// Object: BookmarkTrackData
// ClassId: 3995
// RuntimeId: 36212
// TypeInfo: 0x0000000144F64090
#include "../Timeline/TimelineTrackData.h"
#include "../Timeline/BookmarkKeyframe.h"
#include "../Timeline/JumpOffsetType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Timeline {
    class BookmarkTrackData : public Timeline::TimelineTrackData {
        Array<Timeline::BookmarkKeyframe> Keyframes; // 0x30
        Timeline::JumpOffsetType JumpOffsetType; // 0x38
        Float32 JumpTime; // 0x3C
    }; // 0x40
    static_assert(sizeof(BookmarkTrackData) == 0x40);
}
#pragma pack(pop)