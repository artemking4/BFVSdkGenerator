// Object: UpdateAlphaLevelMinData
// ClassId: 4502
// RuntimeId: 64751
// TypeInfo: 0x0000000144E2B940
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateAlphaLevelMinData : public Emitter::ProcessorData {
        Float32 MinLevel; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateAlphaLevelMinData) == 0x40);
}
#pragma pack(pop)