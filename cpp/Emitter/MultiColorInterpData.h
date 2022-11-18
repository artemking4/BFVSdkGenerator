// Object: MultiColorInterpData
// ClassId: 1585
// RuntimeId: 39078
// TypeInfo: 0x0000000144E2CC40
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/MultiColorGradient.h"

#pragma pack(push, 8)
namespace Emitter {
    class MultiColorInterpData : public Emitter::EvaluatorData {
        Emitter::MultiColorGradient Gradient; // 0x20
    }; // 0x28
    static_assert(sizeof(MultiColorInterpData) == 0x28);
}
#pragma pack(pop)