// Object: BoxEvaluatorData
// ClassId: 1580
// RuntimeId: 57110
// TypeInfo: 0x0000000144E2D140
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class BoxEvaluatorData : public Emitter::EvaluatorData {
        Core::Vec3 Dimensions; // 0x20
        Core::Vec3 Pivot; // 0x30
    }; // 0x40
    static_assert(sizeof(BoxEvaluatorData) == 0x40);
}
#pragma pack(pop)