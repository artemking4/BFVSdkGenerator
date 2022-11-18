// Object: SpawnColorRandomData
// ClassId: 4488
// RuntimeId: 39127
// TypeInfo: 0x0000000144E2C440
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class SpawnColorRandomData : public Emitter::ProcessorData {
        char pad_0x38[0x8];
        Core::Vec3 Color0; // 0x40
        Core::Vec3 Color1; // 0x50
    }; // 0x60
    static_assert(sizeof(SpawnColorRandomData) == 0x60);
}
#pragma pack(pop)