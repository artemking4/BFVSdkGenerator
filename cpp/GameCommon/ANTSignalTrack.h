// Object: ANTSignalTrack
// ClassId: 8618
// RuntimeId: 55380
// TypeInfo: 0x0000000144E4BBD0
#include "../Timeline/LinkTrack.h"

namespace GameCommon {
    class ANTSignalTrack : public Timeline::LinkTrack {
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(ANTSignalTrack) == 0x60);
}