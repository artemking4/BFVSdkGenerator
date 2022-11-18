// Object: UpdateColorData
// ClassId: 4511
// RuntimeId: 20577
// TypeInfo: 0x0000000144E2BC40
#include "../Emitter/ProcessorData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Emitter {
    class UpdateColorData : public Emitter::ProcessorData {
        char pad_0x38[0x8];
        Core::Vec3 Color; // 0x40
    }; // 0x50
    static_assert(sizeof(UpdateColorData) == 0x50);
}
#pragma pack(pop)