// Object: UpdateVolumetricData
// ClassId: 4535
// RuntimeId: 37405
// TypeInfo: 0x0000000144E2AF40
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateVolumetricData : public Emitter::ProcessorData {
        Float32 Absorption; // 0x38
        Boolean HighQualityInjection; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(UpdateVolumetricData) == 0x40);
}
#pragma pack(pop)