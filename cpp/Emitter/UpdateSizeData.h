// Object: UpdateSizeData
// ClassId: 4523
// RuntimeId: 16561
// TypeInfo: 0x0000000144E2BEC0
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateSizeData : public Emitter::ProcessorData {
        Core::Vec2 Pivot; // 0x38
        Boolean MultiplyWithSizeXYZ; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(UpdateSizeData) == 0x48);
}
#pragma pack(pop)