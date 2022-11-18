// Object: ANTControlTrack
// ClassId: 8612
// RuntimeId: 29287
// TypeInfo: 0x0000000144E4BC50
#include "../Timeline/LinkTrack.h"

namespace GameCommon {
    class ANTControlTrack : public Timeline::LinkTrack {
        char pad_0x58[0x28];
    }; // 0x80
    static_assert(sizeof(ANTControlTrack) == 0x80);
}