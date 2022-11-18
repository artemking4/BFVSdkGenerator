// Object: ClipAssetTrack
// ClassId: 8597
// RuntimeId: 51792
// TypeInfo: 0x0000000144E400C0
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class ClipAssetTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x88];
    }; // 0xE0
    static_assert(sizeof(ClipAssetTrack) == 0xE0);
}