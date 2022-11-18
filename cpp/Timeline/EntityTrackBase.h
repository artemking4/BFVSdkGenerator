// Object: EntityTrackBase
// ClassId: 8598
// RuntimeId: 16456
// TypeInfo: 0x0000000144F61AE0
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class EntityTrackBase : public Timeline::TimelineTrack {
        char pad_0x58[0x38];
    }; // 0x90
    static_assert(sizeof(EntityTrackBase) == 0x90);
}