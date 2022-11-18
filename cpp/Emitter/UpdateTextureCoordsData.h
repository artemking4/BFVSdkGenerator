// Object: UpdateTextureCoordsData
// ClassId: 4529
// RuntimeId: 37344
// TypeInfo: 0x0000000144E2BFC0
#include "../Emitter/ProcessorData.h"
#include "../Render/AtlasTextureAsset.h"
#include "../Global/Boolean.h"
#include "../Emitter/TexCoordModifier.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateTextureCoordsData : public Emitter::ProcessorData {
        Render::AtlasTextureAsset BaseTexture; // 0x38
        Render::AtlasTextureAsset NormalTexture; // 0x40
        Emitter::TexCoordModifier ModifierU; // 0x48
        Emitter::TexCoordModifier ModifierV; // 0x4C
        Float32 ScaleU; // 0x50
        Float32 ScaleV; // 0x54
        Float32 BiasU; // 0x58
        Float32 BiasV; // 0x5C
        Boolean DisableClipScaleOptimization; // 0x60
        char pad_0x61[0x7];
    }; // 0x68
    static_assert(sizeof(UpdateTextureCoordsData) == 0x68);
}
#pragma pack(pop)