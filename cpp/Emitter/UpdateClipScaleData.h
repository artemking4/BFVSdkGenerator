// Object: UpdateClipScaleData
// ClassId: 4508
// RuntimeId: 20449
// TypeInfo: 0x0000000144E2B440
#include "../Emitter/ProcessorData.h"
#include "../Global/Int16.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateClipScaleData : public Emitter::ProcessorData {
        Array<Int16> Lookup; // 0x38
    }; // 0x40
    static_assert(sizeof(UpdateClipScaleData) == 0x40);
}
#pragma pack(pop)