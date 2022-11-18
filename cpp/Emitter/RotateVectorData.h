// Object: RotateVectorData
// ClassId: 1592
// RuntimeId: 25911
// TypeInfo: 0x0000000144E2D340
#include "../Emitter/EvaluatorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class RotateVectorData : public Emitter::EvaluatorData {
        Float32 Angle; // 0x20
        Boolean InputAffectsPhi; // 0x24
        Boolean RotateWithinPlane; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(RotateVectorData) == 0x28);
}
#pragma pack(pop)