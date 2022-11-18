// Object: KeyedTransformLayerData
// ClassId: 4071
// RuntimeId: 61149
// TypeInfo: 0x0000000144F5F960
#include "../Timeline/TransformLayerData.h"
#include "../Global/Boolean.h"
#include "../Timeline/InfinityType.h"
#include "../Timeline/FloatTrackData.h"
#include "../Timeline/QuatKeyframe.h"

#pragma pack(push, 8)
namespace Timeline {
    class KeyedTransformLayerData : public Timeline::TransformLayerData {
        Timeline::InfinityType PreInfinityForMinRotation; // 0x40
        Timeline::InfinityType PostInfinityForMinRotation; // 0x44
        Timeline::FloatTrackData TranslationX; // 0x48
        Timeline::FloatTrackData TranslationY; // 0x50
        Timeline::FloatTrackData TranslationZ; // 0x58
        Timeline::FloatTrackData RotationX; // 0x60
        Timeline::FloatTrackData RotationY; // 0x68
        Timeline::FloatTrackData RotationZ; // 0x70
        Array<Timeline::QuatKeyframe> QuatKeyframes; // 0x78
        Boolean ForceMinimumRotationPathBetweenKeys; // 0x80
        char pad_0x81[0x7];
    }; // 0x88
    static_assert(sizeof(KeyedTransformLayerData) == 0x88);
}
#pragma pack(pop)