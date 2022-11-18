// Object: PolynomialOperatorData
// ClassId: 1588
// RuntimeId: 55129
// TypeInfo: 0x0000000144E2D4C0
#include "../Emitter/EvaluatorData.h"
#include "../Emitter/PolynomialTempData.h"
#include "../Emitter/PolynomialOperation.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class PolynomialOperatorData : public Emitter::EvaluatorData {
        Emitter::PolynomialOperation Operation; // 0x20
        char pad_0x24[0xC];
        Emitter::PolynomialTempData FirstOperand; // 0x30
        Emitter::PolynomialTempData SecondOperand; // 0x50
        Float32 MinClampResult; // 0x70
        Float32 MaxClampResult; // 0x74
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(PolynomialOperatorData) == 0x80);
}
#pragma pack(pop)