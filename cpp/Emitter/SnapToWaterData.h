// Object: SnapToWaterData
// ClassId: 4485
// RuntimeId: 22661
// TypeInfo: 0x0000000144E2ADC0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SnapToWaterData : public Emitter::ProcessorData {
        Float32 Offset; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SnapToWaterData) == 0x40);
}
#pragma pack(pop)