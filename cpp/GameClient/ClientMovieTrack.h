// Object: ClientMovieTrack
// ClassId: 8595
// RuntimeId: 52968
// TypeInfo: 0x0000000144E41CF0
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class ClientMovieTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x38];
    }; // 0x90
    static_assert(sizeof(ClientMovieTrack) == 0x90);
}