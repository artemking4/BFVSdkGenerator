// Object: ConstantEvaluatorData
// ClassId: 1583
// RuntimeId: 21189
// TypeInfo: 0x0000000144E2CD40
#include "../Emitter/EvaluatorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class ConstantEvaluatorData : public Emitter::EvaluatorData {
        Float32 Scale; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ConstantEvaluatorData) == 0x28);
}
#pragma pack(pop)