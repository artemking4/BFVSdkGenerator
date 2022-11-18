// Object: PolynomialColorInterpData
// ClassId: 1586
// RuntimeId: 40729
// TypeInfo: 0x0000000144E2CCC0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"

#pragma pack(push, 16)
namespace Emitter {
    class PolynomialColorInterpData : public Emitter::EvaluatorData {
        Core::Vec3 Color0; // 0x20
        Core::Vec3 Color1; // 0x30
        Core::Vec4 Coefficients; // 0x40
    }; // 0x50
    static_assert(sizeof(PolynomialColorInterpData) == 0x50);
}
#pragma pack(pop)