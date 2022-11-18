// Object: TransformLayerData
// ClassId: 4060
// RuntimeId: 54685
// TypeInfo: 0x0000000144F5F7E0
#include "../Timeline/TimelineTrackData.h"
#include "../Timeline/FloatTrackData.h"
#include "../Timeline/LayeredTransform_BlendType.h"

namespace Timeline {
    class TransformLayerData : public Timeline::TimelineTrackData {
        Timeline::FloatTrackData Weight; // 0x30
        Timeline::LayeredTransform_BlendType Blendtype; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(TransformLayerData) == 0x40);
}