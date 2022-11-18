// Object: UpdateAlphaLevelScaleData
// ClassId: 4503
// RuntimeId: 8475
// TypeInfo: 0x0000000144E2B840
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateAlphaLevelScaleData : public Emitter::ProcessorData {
        Float32 Exponent; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateAlphaLevelScaleData) == 0x40);
}
#pragma pack(pop)