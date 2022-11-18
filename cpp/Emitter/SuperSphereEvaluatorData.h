// Object: SuperSphereEvaluatorData
// ClassId: 1597
// RuntimeId: 26161
// TypeInfo: 0x0000000144E2CEC0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Emitter {
    class SuperSphereEvaluatorData : public Emitter::EvaluatorData {
        Float32 InnerRadius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Scale; // 0x30
        Core::Vec3 Pivot; // 0x40
        Float32 OuterRadius; // 0x50
        Float32 StartZenithAngle; // 0x54
        Float32 EndZenithAngle; // 0x58
        Float32 InnerRadiusBound; // 0x5C
        Float32 StartZenithAngleBound; // 0x60
        Float32 EndZenithAngleBound; // 0x64
        Float32 StartAzimuthAngle; // 0x68
        Float32 EndAzimuthAngle; // 0x6C
        Float32 DistributionAlongRadius; // 0x70
        Boolean OrientAlongZ; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(SuperSphereEvaluatorData) == 0x80);
}
#pragma pack(pop)