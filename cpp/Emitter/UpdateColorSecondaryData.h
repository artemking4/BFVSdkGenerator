// Object: UpdateColorSecondaryData
// ClassId: 4512
// RuntimeId: 26060
// TypeInfo: 0x0000000144E2BBC0
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class UpdateColorSecondaryData : public Emitter::ProcessorData {
        char pad_0x38[0x8];
        Core::Vec3 Color; // 0x40
    }; // 0x50
    static_assert(sizeof(UpdateColorSecondaryData) == 0x50);
}
#pragma pack(pop)