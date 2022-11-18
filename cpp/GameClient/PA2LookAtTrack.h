// Object: PA2LookAtTrack
// ClassId: 8622
// RuntimeId: 64247
// TypeInfo: 0x0000000144E40040
#include "../Timeline/LinkTrack.h"

namespace GameClient {
    class PA2LookAtTrack : public Timeline::LinkTrack {
        char pad_0x58[0x40];
    }; // 0x98
    static_assert(sizeof(PA2LookAtTrack) == 0x98);
}