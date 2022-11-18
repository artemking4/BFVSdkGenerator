// Object: DiceTransformLayerData
// ClassId: 4067
// RuntimeId: 11403
// TypeInfo: 0x0000000144DBB680
#include "../Timeline/TransformLayerData.h"
#include "../DiceCommonsShared/DiceTransformTrackData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DiceTransformLayerData : public Timeline::TransformLayerData {
        DiceCommonsShared::DiceTransformTrackData TransformationsTrack; // 0x40
    }; // 0x48
    static_assert(sizeof(DiceTransformLayerData) == 0x48);
}
#pragma pack(pop)