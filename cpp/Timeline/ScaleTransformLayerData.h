// Object: ScaleTransformLayerData
// ClassId: 4073
// RuntimeId: 34687
// TypeInfo: 0x0000000144F5F8E0
#include "../Timeline/TransformLayerData.h"
#include "../Global/Boolean.h"
#include "../Timeline/FloatTrackData.h"

#pragma pack(push, 8)
namespace Timeline {
    class ScaleTransformLayerData : public Timeline::TransformLayerData {
        Timeline::FloatTrackData ScaleX; // 0x40
        Timeline::FloatTrackData ScaleY; // 0x48
        Timeline::FloatTrackData ScaleZ; // 0x50
        Boolean IsUniform; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(ScaleTransformLayerData) == 0x60);
}
#pragma pack(pop)