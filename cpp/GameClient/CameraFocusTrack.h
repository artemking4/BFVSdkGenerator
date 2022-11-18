// Object: CameraFocusTrack
// ClassId: 8599
// RuntimeId: 59532
// TypeInfo: 0x0000000144E3F610
#include "../Timeline/EntityTrackBase.h"

namespace GameClient {
    class CameraFocusTrack : public Timeline::EntityTrackBase {
        char pad_0x90[0x8];
    }; // 0x98
    static_assert(sizeof(CameraFocusTrack) == 0x98);
}