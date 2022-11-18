// Object: CameraDirectorProxyTrack
// ClassId: 8585
// RuntimeId: 29180
// TypeInfo: 0x0000000144E3F690
#include "../Timeline/TimelineTrack.h"

namespace GameClient {
    class CameraDirectorProxyTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x28];
    }; // 0x80
    static_assert(sizeof(CameraDirectorProxyTrack) == 0x80);
}