// Object: UpdateTrapezoidShapeData
// ClassId: 4532
// RuntimeId: 9824
// TypeInfo: 0x0000000144E2B6C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateTrapezoidShapeData : public Emitter::ProcessorData {
        Float32 Scale; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateTrapezoidShapeData) == 0x40);
}
#pragma pack(pop)