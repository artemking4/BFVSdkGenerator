// Object: LayeredTransformTrackData
// ClassId: 4046
// RuntimeId: 39895
// TypeInfo: 0x0000000144F64420
#include "../Timeline/PropertyTrackBaseData.h"
#include "../Timeline/TransformLayerData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Timeline {
    class LayeredTransformTrackData : public Timeline::PropertyTrackBaseData {
        Array<Timeline::TransformLayerData> LayerTracks; // 0x40
        Boolean UseTimelineSpace; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(LayeredTransformTrackData) == 0x50);
}
#pragma pack(pop)