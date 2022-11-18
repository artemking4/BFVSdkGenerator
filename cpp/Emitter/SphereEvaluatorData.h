// Object: SphereEvaluatorData
// ClassId: 1594
// RuntimeId: 39077
// TypeInfo: 0x0000000144E2CFC0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class SphereEvaluatorData : public Emitter::EvaluatorData {
        Float32 Radius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Scale; // 0x30
        Core::Vec3 Pivot; // 0x40
    }; // 0x50
    static_assert(sizeof(SphereEvaluatorData) == 0x50);
}
#pragma pack(pop)