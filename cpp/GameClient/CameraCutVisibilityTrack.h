// Object: CameraCutVisibilityTrack
// ClassId: 8584
// RuntimeId: 6489
// TypeInfo: 0x0000000144E3F710
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class CameraCutVisibilityTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x28];
    }; // 0x80
    static_assert(sizeof(CameraCutVisibilityTrack) == 0x80);
}