// Object: PathTransformLayerData
// ClassId: 4072
// RuntimeId: 14050
// TypeInfo: 0x0000000144E96830
#include "../Timeline/TransformLayerData.h"
#include "../Entity/GameObjectData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Timeline/FloatTrackData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class PathTransformLayerData : public Timeline::TransformLayerData {
        Core::Vec3 UpAxis; // 0x40
        Core::LinearTransform AttachOffset; // 0x50
        Entity::GameObjectData PathEntity; // 0x90
        Timeline::FloatTrackData TimingCurve; // 0x98
        Boolean ForceUpright; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(PathTransformLayerData) == 0xB0);
}
#pragma pack(pop)