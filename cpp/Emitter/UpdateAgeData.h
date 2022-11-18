// Object: UpdateAgeData
// ClassId: 4500
// RuntimeId: 44413
// TypeInfo: 0x0000000144E2C3C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateAgeData : public Emitter::ProcessorData {
        Float32 Lifetime; // 0x38
        Float32 RandomLifetimeScale; // 0x3C
        Float32 MaxFactor; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(UpdateAgeData) == 0x48);
}
#pragma pack(pop)