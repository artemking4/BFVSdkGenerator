// Object: TexShaderParameter
// ClassId: 4591
// RuntimeId: 35483
// TypeInfo: 0x0000000144EA2BD0
#include "../MorphBase/ShaderParameter.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace MorphBase {
    class TexShaderParameter : public MorphBase::ShaderParameter {
        Render::TextureAsset Texture; // 0x20
    }; // 0x28
    static_assert(sizeof(TexShaderParameter) == 0x28);
}
#pragma pack(pop)