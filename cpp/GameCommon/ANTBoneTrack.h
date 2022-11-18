// Object: ANTBoneTrack
// ClassId: 8610
// RuntimeId: 64950
// TypeInfo: 0x0000000144E4BCD0
#include "../Timeline/LayeredTransformTrack.h"

namespace GameCommon {
    class ANTBoneTrack : public Timeline::LayeredTransformTrack {
        char pad_0x1E0[0x30];
    }; // 0x210
    static_assert(sizeof(ANTBoneTrack) == 0x210);
}