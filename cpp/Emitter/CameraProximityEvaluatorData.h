// Object: CameraProximityEvaluatorData
// ClassId: 1582
// RuntimeId: 51690
// TypeInfo: 0x0000000144E2CDC0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class CameraProximityEvaluatorData : public Emitter::EvaluatorData {
        Float32 ForwardOffset; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Size; // 0x30
        Core::Vec3 Offset; // 0x40
        Core::Vec3 InnerRadiusDirection; // 0x50
        Float32 InnerRadius; // 0x60
        char pad_0x64[0xC];
    }; // 0x70
    static_assert(sizeof(CameraProximityEvaluatorData) == 0x70);
}
#pragma pack(pop)