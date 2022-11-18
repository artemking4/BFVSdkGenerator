// Object: ExternalTimeTrackData
// ClassId: 4014
// RuntimeId: 30581
// TypeInfo: 0x0000000144F63F10
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Int32.h"
#include "../Timeline/OffsetType.h"

#pragma pack(push, 8)
namespace Timeline {
    class ExternalTimeTrackData : public Timeline::TimelineTrackData {
        Int32 ExternalTimePriority; // 0x30
        Timeline::OffsetType ExternalTimeOffsetType; // 0x34
        Timeline::OffsetType InitTimeOffsetType; // 0x38
        Timeline::OffsetType CurrentTimeOffsetType; // 0x3C
    }; // 0x40
    static_assert(sizeof(ExternalTimeTrackData) == 0x40);
}
#pragma pack(pop)