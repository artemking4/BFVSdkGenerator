// Object: UpdateAlphaLevelMaxData
// ClassId: 4501
// RuntimeId: 60601
// TypeInfo: 0x0000000144E2B8C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateAlphaLevelMaxData : public Emitter::ProcessorData {
        Float32 MaxLevel; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateAlphaLevelMaxData) == 0x40);
}
#pragma pack(pop)