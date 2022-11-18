// Object: WODEvaluatorData
// ClassId: 1599
// RuntimeId: 23633
// TypeInfo: 0x0000000144E2D0C0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class WODEvaluatorData : public Emitter::EvaluatorData {
        Core::Vec3 Dimensions; // 0x20
        Core::Vec3 Pivot; // 0x30
    }; // 0x40
    static_assert(sizeof(WODEvaluatorData) == 0x40);
}
#pragma pack(pop)