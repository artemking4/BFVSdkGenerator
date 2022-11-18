// Object: UpdateRotationData
// ClassId: 4522
// RuntimeId: 2496
// TypeInfo: 0x0000000144E2BF40
#include "../Emitter/ProcessorData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateRotationData : public Emitter::ProcessorData {
        Boolean EnableClonesRotation; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UpdateRotationData) == 0x40);
}
#pragma pack(pop)