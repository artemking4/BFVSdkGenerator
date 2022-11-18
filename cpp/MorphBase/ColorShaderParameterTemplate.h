// Object: ColorShaderParameterTemplate
// ClassId: 4597
// RuntimeId: 5595
// TypeInfo: 0x0000000144EA2E50
#include "../MorphBase/ShaderParameterTemplate.h"
#include "../GameShared/ColorPalette.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace MorphBase {
    class ColorShaderParameterTemplate : public MorphBase::ShaderParameterTemplate {
        GameShared::ColorPalette Colors; // 0x28
        Int32 Default; // 0x30
        char pad_0x34[0x4];
        CString PresentationName; // 0x38
    }; // 0x40
    static_assert(sizeof(ColorShaderParameterTemplate) == 0x40);
}
#pragma pack(pop)