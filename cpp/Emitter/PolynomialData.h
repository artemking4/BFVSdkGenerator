// Object: PolynomialData
// ClassId: 1587
// RuntimeId: 44475
// TypeInfo: 0x0000000144E2D540
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec4.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class PolynomialData : public Emitter::EvaluatorData {
        Float32 ScaleValue; // 0x20
        char pad_0x24[0xC];
        Core::Vec4 Coefficients; // 0x30
        Float32 MinClamp; // 0x40
        Float32 MaxClamp; // 0x44
        char pad_0x48[0x8];
    }; // 0x50
    static_assert(sizeof(PolynomialData) == 0x50);
}
#pragma pack(pop)