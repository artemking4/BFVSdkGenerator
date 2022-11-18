// Object: SchematicEventTrack
// ClassId: 8630
// RuntimeId: 20996
// TypeInfo: 0x0000000144F64BD0
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class SchematicEventTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(SchematicEventTrack) == 0x68);
}