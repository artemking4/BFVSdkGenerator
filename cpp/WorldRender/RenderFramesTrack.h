// Object: RenderFramesTrack
// ClassId: 8629
// RuntimeId: 609
// TypeInfo: 0x0000000144EB54A0
#include "../Timeline/TimelineTrack.h"

namespace WorldRender {
    class RenderFramesTrack : public Timeline::TimelineTrack {
        char pad_0x58[0x30];
    }; // 0x88
    static_assert(sizeof(RenderFramesTrack) == 0x88);
}