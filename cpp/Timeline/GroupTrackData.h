// Object: GroupTrackData
// ClassId: 4016
// RuntimeId: 42893
// TypeInfo: 0x0000000144F64520
#include "../Timeline/TimelineTrackData.h"
#include "../Timeline/GroupTrackRootData.h"

#pragma pack(push, 8)
namespace Timeline {
    class GroupTrackData : public Timeline::TimelineTrackData {
        Timeline::GroupTrackRootData RootData; // 0x30
    }; // 0x38
    static_assert(sizeof(GroupTrackData) == 0x38);
}
#pragma pack(pop)