// Object: AntTrajectoryAlignTransformLayerData
// ClassId: 4068
// RuntimeId: 58826
// TypeInfo: 0x0000000144DBB780
#include "../DiceCommonsShared/DiceTransformLayerData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Timeline/FloatTrackData.h"
#include "../DiceCommonsShared/BuiltFullAlignTransform.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AntTrajectoryAlignTransformLayerData : public DiceCommonsShared::DiceTransformLayerData {
        CString ChildBoneName; // 0x48
        Timeline::FloatTrackData AlignWeight; // 0x50
        Array<DiceCommonsShared::BuiltFullAlignTransform> BuiltFullAlignTransforms; // 0x58
        Boolean AlignAxisX; // 0x60
        Boolean AlignAxisY; // 0x61
        Boolean AlignAxisZ; // 0x62
        char pad_0x63[0x5];
    }; // 0x68
    static_assert(sizeof(AntTrajectoryAlignTransformLayerData) == 0x68);
}
#pragma pack(pop)