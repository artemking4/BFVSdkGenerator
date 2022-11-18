// Object: AirResistanceData
// ClassId: 4476
// RuntimeId: 50474
// TypeInfo: 0x0000000144E2C140
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class AirResistanceData : public Emitter::ProcessorData {
        Float32 DragFactor; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(AirResistanceData) == 0x40);
}
#pragma pack(pop)