// Object: SoundEntityTrack
// ClassId: 8631
// RuntimeId: 19098
// TypeInfo: 0x0000000144E20410
#include "../Timeline/TimelineTrack.h"

namespace Audio {
    class SoundEntityTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x38];
    }; // 0x90
    static_assert(sizeof(SoundEntityTrack) == 0x90);
}