// Object: ClientFadeTrack
// ClassId: 8594
// RuntimeId: 64065
// TypeInfo: 0x0000000144E34900
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class ClientFadeTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x10];
    }; // 0x68
    static_assert(sizeof(ClientFadeTrack) == 0x68);
}