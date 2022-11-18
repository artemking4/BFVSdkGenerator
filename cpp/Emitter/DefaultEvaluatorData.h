// Object: DefaultEvaluatorData
// ClassId: 1584
// RuntimeId: 47915
// TypeInfo: 0x0000000144E2D5C0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Emitter {
    class DefaultEvaluatorData : public Emitter::EvaluatorData {
        Core::Vec4 Values; // 0x20
    }; // 0x30
    static_assert(sizeof(DefaultEvaluatorData) == 0x30);
}
#pragma pack(pop)