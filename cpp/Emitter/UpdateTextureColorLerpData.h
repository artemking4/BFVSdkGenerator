// Object: UpdateTextureColorLerpData
// ClassId: 4528
// RuntimeId: 52933
// TypeInfo: 0x0000000144E2B7C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateTextureColorLerpData : public Emitter::ProcessorData {
        Float32 TextureColorStrength; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UpdateTextureColorLerpData) == 0x40);
}
#pragma pack(pop)