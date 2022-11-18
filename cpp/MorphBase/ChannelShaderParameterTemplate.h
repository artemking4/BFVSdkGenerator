// Object: ChannelShaderParameterTemplate
// ClassId: 4596
// RuntimeId: 57780
// TypeInfo: 0x0000000144EA2ED0
#include "../MorphBase/ShaderParameterTemplate.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace MorphBase {
    class ChannelShaderParameterTemplate : public MorphBase::ShaderParameterTemplate {
        char pad_0x28[0x8];
        Core::Vec4 Default; // 0x30
        CString PresentationName; // 0x40
        Boolean AlphaEnabled; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(ChannelShaderParameterTemplate) == 0x50);
}
#pragma pack(pop)