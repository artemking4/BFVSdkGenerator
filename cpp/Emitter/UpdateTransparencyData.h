// Object: UpdateTransparencyData
// ClassId: 4530
// RuntimeId: 33956
// TypeInfo: 0x0000000144E2BB40
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateTransparencyData : public Emitter::ProcessorData {
        Float32 CullThreshold; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateTransparencyData) == 0x40);
}
#pragma pack(pop)