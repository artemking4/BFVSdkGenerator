// Object: SchematicPinTrackData
// ClassId: 4022
// RuntimeId: 54471
// TypeInfo: 0x0000000144F642A0
#include "../Timeline/TimelineTrackData.h"
#include "../Global/Int32.h"

namespace Timeline {
    class SchematicPinTrackData : public Timeline::TimelineTrackData {
        Int32 SourcePinId; // 0x30
        Int32 TargetPinId; // 0x34
        Int32 TargetPinNameHash; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SchematicPinTrackData) == 0x40);
}