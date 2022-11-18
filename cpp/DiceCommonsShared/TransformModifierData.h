// Object: TransformModifierData
// ClassId: 5234
// RuntimeId: 45325
// TypeInfo: 0x0000000144DBEAB0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../GameShared/RotationAxis.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class TransformModifierData : public Core::DataContainer {
        Float32 RandomTimingToApply; // 0x18
        GameShared::RotationAxis RotationAxis; // 0x1C
        Core::Vec3 RotationAxisVec; // 0x20
    }; // 0x30
    static_assert(sizeof(TransformModifierData) == 0x30);
}
#pragma pack(pop)