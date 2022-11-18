// Object: CameraTrackBase
// ClassId: 8586
// RuntimeId: 22176
// TypeInfo: 0x0000000144E3F590
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class CameraTrackBase : public Timeline::TimelineTrack {
        char pad_0x58[0x18];
    }; // 0x70
    static_assert(sizeof(CameraTrackBase) == 0x70);
}