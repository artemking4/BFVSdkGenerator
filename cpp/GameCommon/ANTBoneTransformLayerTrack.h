// Object: ANTBoneTransformLayerTrack
// ClassId: 8639
// RuntimeId: 58845
// TypeInfo: 0x0000000144E50510
#include "../Timeline/SimpleTransformLayer.h"

namespace GameCommon {
    class ANTBoneTransformLayerTrack : public Timeline::SimpleTransformLayer {
        char pad_0x60[0x30];
    }; // 0x90
    static_assert(sizeof(ANTBoneTransformLayerTrack) == 0x90);
}