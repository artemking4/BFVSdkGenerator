// Object: ClientCameraDirectorTrack
// ClassId: 8593
// RuntimeId: 52443
// TypeInfo: 0x0000000144E36E90
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class ClientCameraDirectorTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x30];
    }; // 0x88
    static_assert(sizeof(ClientCameraDirectorTrack) == 0x88);
}