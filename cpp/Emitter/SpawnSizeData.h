// Object: SpawnSizeData
// ClassId: 4497
// RuntimeId: 17299
// TypeInfo: 0x0000000144E2C7C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class SpawnSizeData : public Emitter::ProcessorData {
        Float32 Size; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(SpawnSizeData) == 0x40);
}
#pragma pack(pop)