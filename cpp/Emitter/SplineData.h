// Object: SplineData
// ClassId: 1596
// RuntimeId: 34982
// TypeInfo: 0x0000000144E2D440
#include "../Emitter/EvaluatorData.h"
#include "../Core/SplineCurve.h"

#pragma pack(push, 16)
namespace Emitter {
    class SplineData : public Emitter::EvaluatorData {
        Core::SplineCurve SplineCurve; // 0x20
    }; // 0x100
    static_assert(sizeof(SplineData) == 0x100);
}
#pragma pack(pop)