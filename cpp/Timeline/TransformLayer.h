// Object: TransformLayer
// ClassId: 8637
// RuntimeId: 13862
// TypeInfo: 0x0000000144F610C0
#include "../Timeline/TimelineTrack.h"

namespace Timeline {
    class TransformLayer : public Timeline::TimelineTrack {
        char pad_0x58[0x8];
    }; // 0x60
    static_assert(sizeof(TransformLayer) == 0x60);
}