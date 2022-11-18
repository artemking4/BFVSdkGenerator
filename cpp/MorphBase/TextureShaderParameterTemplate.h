// Object: TextureShaderParameterTemplate
// ClassId: 4599
// RuntimeId: 23413
// TypeInfo: 0x0000000144EA2DD0
#include "../MorphBase/ShaderParameterTemplate.h"
#include "../MorphBase/TextureContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MorphBase {
    class TextureShaderParameterTemplate : public MorphBase::ShaderParameterTemplate {
        Array<MorphBase::TextureContainer> TextureList; // 0x28
        CString PresentationName; // 0x30
    }; // 0x38
    static_assert(sizeof(TextureShaderParameterTemplate) == 0x38);
}
#pragma pack(pop)