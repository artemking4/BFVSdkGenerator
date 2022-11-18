// Object: UpdateRibbonTextureData
// ClassId: 4521
// RuntimeId: 20401
// TypeInfo: 0x0000000144E2B9C0
#include "../Emitter/ProcessorData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateRibbonTextureData : public Emitter::ProcessorData {
        Int32 TextureParticleCount; // 0x38
        Boolean MirrorTexture; // 0x3C
        Boolean BeamLikeCoords; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(UpdateRibbonTextureData) == 0x40);
}
#pragma pack(pop)